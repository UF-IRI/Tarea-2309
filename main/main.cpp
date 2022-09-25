#include <cstdlib>
#include <iostream>

#include "ConjuntoEnterosLib.h"



using namespace std;

int main(int argc, char** argv)
{
	int n;
	Extremos resultado;
	do {
		cout << "\nCuantos numeros quiere ingresar: ";
		cin >> n;
	} while (n <= 0);
	int* array = new int[n];
	for (int i = 0; i < n; i++) {
		cout << "\n(" << i + 1 << ") Ingrese un valor entero : ";
		cin >> array[i];
	}
	resultado = encontrarExtremos(array, n);
	cout << "\nEl maximo es: " << resultado.maximo << "\nEl minimo es: " << resultado.minimo;
	cout << "\nEl promedio es: " << calcularPromedio(array, n) << endl;
	delete[] array;
	return EXIT_SUCCESS;
}
