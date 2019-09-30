// dllUseDemo.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

#pragma comment(lib,"dllTest.lib")
extern "C"_declspec(dllimport) int add(int a, int b);
extern "C"_declspec(dllimport) int sub(int a, int b);


int _tmain(int argc, _TCHAR* argv[])
{
	int nParam1 = 9;
	int nParam2 = 3;
	int nAdd = add(nParam1, nParam2);
	int nSub = sub(nParam1, nParam2);
	std::cout << nAdd << ":" << nSub << std::endl;
	system("pause");


	return 0;
}

