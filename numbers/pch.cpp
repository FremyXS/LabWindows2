// pch.cpp: файл исходного кода, соответствующий предварительно скомпилированному заголовочному файлу

#include "pch.h"

// При использовании предварительно скомпилированных заголовочных файлов необходим следующий файл исходного кода для выполнения сборки.
double Sum(double a, double b) {
	return a + b;
}
double Min(double a, double b) {
	return a - b;
}
double Mult(double a, double b) {
	return a * b;
}