#pragma once
#include <stdbool.h>
bool CStringComp(char str1[], char str2[])
{
	if (strlen(str1) != strlen(str2))
	{
		return false;
	}
	for (int i = 0; i < strlen(str1); i++)
	{
		if (str1[i] != str2[i])
		{
			return false;
		}
	}
	return true;
}

bool isCString(const char str[])
{
	if (strlen(str) > 2)
	{
		return true;
	}
	return false;
}