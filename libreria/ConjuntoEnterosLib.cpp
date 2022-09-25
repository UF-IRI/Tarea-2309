#include "ConjuntoEnterosLib.h"

Extremos encontrarExtremos(int* array, int n) {
	Extremos ext;
	ext.maximo = array[0];
	ext.minimo = array[0];
	for (int i = 0; i < n; i++) {
		if (array[i] < ext.minimo) {
			ext.minimo = array[i];
		}
		if (array[i] > ext.maximo) {
			ext.maximo = array[i];
		}
	}
	return ext;
}

float calcularPromedio(int* array, int n)
{
	float promedio = 0;
	for (int i = 0; i < n; i++) {
		promedio += array[i];
	}

	return promedio / n;
}