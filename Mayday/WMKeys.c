#pragma once
#include "WMKeys.h"
#include "cString.h"
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

WMKey GetKeyCode(const char *input)
{
	return stringToWM(input);
}

int stringToWM(const char *input)
{
	if (!isCString(input))
	{
		printf("stringToWM: Converting %c to 0x%x\n", input[0], (unsigned char)input[0]);
		return (unsigned char)input[0];
	}
	else
	{
		resolveWM(input);
	}
}


const char* GetWMName(WMKey key)
{
	switch (key)
	{
	case 0x48:
		return "H";
	case 0x4C:
		return "L";
	case 0x0D:
		return "Enter";
	case 0x25:
		return "Left";
	case 0x09:
		return "Tab";
	default:
		return "INVALID";
	}

}

int resolveWM(const char *input)
{
	if (CStringComp("Enter\n", input))
	{
		return Enter;
	}
	if (CStringComp("Left\n", input))
	{
		return Left;
	}
	if (CStringComp("Tab\n", input))
	{
		return Tab;
	}
	else
	{
		return INVALID;
	}
}