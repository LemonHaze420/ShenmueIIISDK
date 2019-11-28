#include "framework.h"

#define MOD_NAME					"Example Tool"
#define MOD_VER						"1.0"
#define MOD_STRING					MOD_NAME " " MOD_VER

// Called when DLL is attached
void Attach() {
	printf(MOD_STRING " attached\n");
}

// Called when DLL is detached
void Detach() {
	printf(MOD_STRING " detached\n");
}

// ---------------------------------------------------------------------------------
BOOL APIENTRY DllMain(HMODULE hModule, DWORD dwReason, LPVOID lpReserved)
{
	DisableThreadLibraryCalls(hModule);
	AllocConsole();
	SetConsoleTitleA(MOD_STRING);
	::freopen("CONOUT$", "w", stdout);
	::freopen("CONOUT$", "w", stderr);
	::freopen("CONIN$", "r", stdin);
	switch (dwReason) {
		case DLL_PROCESS_ATTACH:
			if (init() == -1) return false;
			CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)Attach, NULL, 0, NULL);
			break;
		case DLL_PROCESS_DETACH:
			CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)Detach, NULL, 0, NULL);
			break;
	}
	return TRUE;
}