#define MOD_NAME					"Example Tool"
#define MOD_VER						"1.0"
#define MOD_STRING					MOD_NAME " " MOD_VER

#include "framework.h"

// UObject::ProcessEvent sig: 
// "\x48\x33\xC5\x48\x89\x85\xB0\x00\x00\x00\x4D\x8B\xF8\x45\x33\xF6\x44\x8B\x41\x0C\x48\x8B\xF2" - 0x26    
// xor     rax, rbp (v100: 0x140979A20; v101: 0x14097B3E0)  
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
BOOL APIENTRY DllMain(HMODULE hModule, DWORD dwReason, LPVOID lpReserved) {
	DisableThreadLibraryCalls(hModule);
	AllocConsole();
	SetConsoleTitleA(MOD_STRING);
	::freopen("CONOUT$", "w", stdout);
	::freopen("CONOUT$", "w", stderr);
	::freopen("CONIN$", "r", stdin);
	switch (dwReason) {
	case DLL_PROCESS_ATTACH:
		if (init("Shenmue3-Win64-Shipping.exe") == -1) return false;
		CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)Attach, NULL, 0, NULL);
		break;
	case DLL_PROCESS_DETACH:
		CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)Detach, NULL, 0, NULL);
		break;
	}
	return TRUE;
}