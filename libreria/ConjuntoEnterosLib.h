#pragma once
struct extremos {
	int maximo;
	int minimo;
};
typedef extremos Extremos;
Extremos encontrarExtremos(int* array, int n);
float calcularPromedio(int* array, int n);