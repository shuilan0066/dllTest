// dllUseDemo_LoadLibrary.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <Windows.h>
#include <iostream>

typedef int(*pAddFunc)(int,int);  //定义形式对应的函数指针类型

int _tmain(int argc, _TCHAR* argv[])
{

	pAddFunc pMyAddFun;

	HINSTANCE hDll;
	hDll = LoadLibrary(L"dllTest.dll");
	if (hDll){

		pMyAddFun = (pAddFunc)GetProcAddress(hDll, "add");

		if (pMyAddFun)
			std::cout << pMyAddFun(1, 2);
	}

	FreeLibrary(hDll);
	getchar();

	return 0;
}

