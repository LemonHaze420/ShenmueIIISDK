#define MOD_NAME					"Example Tool"
#define MOD_VER						"1.0"
#define MOD_STRING					MOD_NAME " " MOD_VER

#include "framework.h"

// Called when DLL is attached
void Attach() {
	printf(MOD_STRING " attached\n");

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
}

// Called when DLL is detached
void Detach() {
	printf(MOD_STRING " detached\n");
}

// --------------------------------------------------------------------------------
// DLL entrypoint
BOOL APIENTRY DllMain(HMODULE hModule, DWORD dwReason, LPVOID lpReserved){
	DisableThreadLibraryCalls(hModule);
#ifdef _DEBUG
	AllocConsole();
	SetConsoleTitleA(MOD_STRING);
	::freopen("CONOUT$", "w", stdout);
	::freopen("CONOUT$", "w", stderr);
	::freopen("CONIN$", "r", stdin);
#endif
    switch (dwReason)    {
    case DLL_PROCESS_ATTACH:
		if (init() == -1) return false;
		Attach();
		break;
    case DLL_PROCESS_DETACH:
		Detach();
		break;
    }
    return TRUE;
}