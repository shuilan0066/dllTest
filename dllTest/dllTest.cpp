// dllTest.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"


extern "C" __declspec(dllexport) int add(int a, int b)
{
	return (a + b);
}

extern "C" __declspec(dllexport) int sub(int a, int b)
{
	return (a - b);
}