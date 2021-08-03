#include "WMKeys.h"
#include <windows.h>
void SendKey(WMKey key)
{
	PostMessage(0x160D07B0, WM_KEYDOWN, key, 1);
	Sleep(1000);
	//PostMessage(0x160D07B0, WM_KEYUP, key, 1);
}