// MathClient.cpp : Client app for MathLibrary DLL.
// #include "pch.h" Uncomment for Visual Studio 2017 and earlier
#include <iostream>
#include <Windows.h>
extern "C" {
	#include "D:\\proga\\OC\\LabWindows2\\numbers\\pch.cpp"
}

using namespace std;

struct complex
{
	double x;
	double y;
};
int main()
{	
	cout << "select 1 if normal num, select 2 if complex num" << endl;

	int num;

	cin >> num;

	if (num == 1) {
		cout << Sum(2,3) << endl;
	}
	if (num == 2)
	{
		complex(*Sum)(complex c1, complex c2);
		HMODULE hModule;
		hModule = LoadLibrary(L"c_numbers.dll");
		Sum = reinterpret_cast<complex(*)(complex, complex)>(GetProcAddress(hModule, "Sum"));
		complex c1{ 1,2 };
		complex c2{ 2,2 };
		complex res = Sum(c1, c2);
		std::cout << res.x << std::endl << res.y << std::endl;
	}

	return 0;
	
}

	