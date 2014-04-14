#include <iostream>
#include <Windows.h>
#include "Standards.h"

DWORD APIENTRY DllMain(HINSTANCE hInstance, DWORD dwReason, LPVOID lpReserved)
{
#ifdef _DEBUG
	MessageBoxA(NULL, "Made by d3v1l401 (http://d3vsite.org/)", "Credits", MB_OK | MB_ICONINFORMATION);
#endif
	return 0;
}