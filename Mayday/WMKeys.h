#pragma once
#include <stdio.h>
#ifndef WMKeys_h
#define WMKeys_h
#endif

typedef int WMKey;
enum Keys
{
	Enter = 0x0D,
	Left = 0x25,
	Tab = 0x09,
	H = 0x48,
	E = 0x45,
	L = 0x4C,
	O = 0x4F,
	INVALID = 0x0
};

enum WindowsMessages
{
	WM_KEYDOWN = 0x0100,
	WM_KEYUP = 0x0101,
};

WMKey GetKeyCode(const char *input);

const char* GetWMName(WMKey *key);
