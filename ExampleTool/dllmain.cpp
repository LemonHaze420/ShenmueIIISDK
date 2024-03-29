#include "framework.h"

#define MOD_NAME					"Example Tool"
#define MOD_VER						"1.0"
#define MOD_STRING					MOD_NAME " " MOD_VER


void energyManagerHook(class UObject* _this, class UFunction* a2, void* pParms) {
#ifdef _DEBUG
	//printf("[EnergyManager] Stopped BP_S3EnergyManager (%s) from ticking..\n", _this->GetFullName().c_str());
#endif
}

// Called when DLL is attached
void Attach() {
	printf(MOD_STRING " attached\n");

	// BP_S3EnergyManager_C PL_Hakkason.PL_Hakkason.PersistentLevel.BP_S3EnergyManager_C_1
	CreateProcessEventHook("Energy Manager Disable", "Function BP_S3EnergyManager.BP_S3EnergyManager_C.ReceiveTick", energyManagerHook);
#ifdef _DEBUG
	auto buildInfoConfig = UObject::FindObject<US3BuildInfoConfig>();
	if (buildInfoConfig) {
		printf("=======================\nBuild Info Config\n=======================\n");
		printf("BuildDate: %s\n",		buildInfoConfig->BuildDate.ToString().c_str());
		printf("BuildNumber: %d\n",		buildInfoConfig->BuildNumber);
		printf("BuildType: %s\n",		buildInfoConfig->BuildType.ToString().c_str());
		printf("Changelist: %d\n",		buildInfoConfig->Changelist);
		printf("Configuration: %s\n",	buildInfoConfig->Configuration.ToString().c_str());
		printf("Platform: %s\n",		buildInfoConfig->Platform.ToString().c_str());
		printf("=======================\n");
	}
#endif
}

// Called when DLL is detached
void Detach() {
	printf(MOD_STRING " detached\n");
}

namespace SDK {
	void customPECall(UObject* _this, UFunction* pFunction, void* pParms) {
		// ... code goes here ...
	}
};

// ---------------------------------------------------------------------------------
BOOL APIENTRY DllMain(HMODULE hModule, DWORD dwReason, LPVOID lpReserved)
{
	DisableThreadLibraryCalls(hModule);
	switch (dwReason) {
		case DLL_PROCESS_ATTACH:
			if (init() == -1) return false;

			// the SDK will only create a console window if it's built in Debug config, 
			// so allocate one as necessary here.
		#ifndef _DEBUG
			AllocConsole();
			freopen("CONIN$", "r", stdin);
			freopen("CONOUT$", "w", stdout);
			freopen("CONOUT$", "w", stderr);
			printf("Allocated console\n");
		#endif
			SetConsoleTitleA(MOD_STRING);

			CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)Attach, NULL, 0, NULL);
			break;
		case DLL_PROCESS_DETACH:
			CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)Detach, NULL, 0, NULL);
			break;
	}
	return TRUE;
}
