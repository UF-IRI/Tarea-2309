#include "maximo.h"

int maximo()
{
    int n, num, i, max;
    cout<< "Ingrese cantidad de numeros enteros para encontrar un maximo" << endl;
    cin >> n >> endl;

    for (i=0; i<n ; i++)
    {
        cout << "Ingrese numero" << endl;
        cin >> num >> endl;

        if (i==0 || num > max){
            max = num;
        }
        
    }
    cout << "El numero maximo es: "<< max <<endl;
    return max;
}


