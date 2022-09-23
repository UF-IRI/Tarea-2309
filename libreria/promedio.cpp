#include "promedio.h"

float promedio()
{ int n,i;
    float promedio;
    int cant,acum=0;

    cout << "Ingrese la cantidad de numeros enteros a promediar"<< endl;
    cin >> n >> endl;

    for(i=0;i<n;i++)
    {   cout << "Ingrese el numero entero"<< i +1 << endl;
    cin >> cant >> endl;
    acum= acum+cant; 
    }

    promedio= (float)acum/(float)n;

    cout << "El promedio de lo numeros ingresados es: "<< promedio << endl;
   
   return promedio;
   
}

