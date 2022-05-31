// pch.cpp: файл исходного кода, соответствующий предварительно скомпилированному заголовочному файлу

#include "pch.h"
// При использовании предварительно скомпилированных заголовочных файлов необходим следующий файл исходного кода для выполнения сборки.


//typedef struct _complex
//{
//	double x;
//	double y;
//}complex;

complex Sum(complex c1, complex c2) {
	
	double x = c1.x + c2.x;
	double y = c1.y + c2.y;
	complex c;
	c.x = x;
	c.y = y;
	return c;
}
complex Min(complex c1, complex c2) {

	double x = c1.x - c2.x;
	double y = c1.y - c2.y;
	complex c;
	c.x = x;
	c.y = y;
	return c;
}
complex Mult(complex c1, complex c2) {

	double x = (c1.x * c2.x) + (c1.x * c2.y);
	double y = (c1.y * c2.x) + (c1.y * c2.y);;
	complex c;
	c.x = x;
	c.y = y;
	return c;
}
//extern "C" __declspec(dllexport) struct complex Min(struct complex c1, struct complex c2){
//	return c1;
//}
//extern "C" __declspec(dllexport) struct complex Mult(struct complex c1, struct complex c2) {
//	return c1;
//}