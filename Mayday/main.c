#pragma once
#include "WMKeys.h"
#include "keyboard.h"
#include "cString.h"
#include <stdio.h>
#include <stdlib.h>

main()
{

	printf("Input:");
	char input[20];
	char *inputPtr = &input;
	fgets(input, sizeof(input), stdin);
	WMKey *code = GetKeyCode(inputPtr);
	printf("main: GetKeyCode returned: %s WM is 0x%x\n", GetWMName(code), code);
	SendKey(code);
	return 0;
}