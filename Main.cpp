#define _WIN32_WINNT _WIN32_WINNT_WINXP
#define NOMINMAX
#include <windows.h>
#include <cstdlib>

// Start L2 as .bin with IP as parameter.
// You can use IP or DNS as IP parameter.
// You could include other parameters.
// You can change the path to the .bin file to avoid including the L2.exe inside the System folder.
// Author: Zoey76
int _stdcall wWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPWSTR lpCmdLine, int nShowCmd) {
	ShellExecute(0, L"open", L"cmd.exe", L"/C start l2.bin IP=auth.lineage2world.eu", 0, SW_HIDE);
}
