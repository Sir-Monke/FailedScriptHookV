#include "pch.h"
#include <main.h>
#include "script.h"

using namespace std;

void ScriptMain() {
	mainLoop();
}

BOOL APIENTRY DllMain(HMODULE hInstance, DWORD reason, LPVOID lpReserved)
{
	switch (reason)
	{
	case DLL_PROCESS_ATTACH:
		scriptRegister(hInstance, ScriptMain);
		break;
	case DLL_PROCESS_DETACH:
		break;
	}
	return TRUE;
}