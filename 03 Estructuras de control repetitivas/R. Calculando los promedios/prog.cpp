#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int k, dato, mayor, menor, suma=0, N;

    cin >> N;

    for (int l=1; l<=N; l++){ // procesa todas las listas

        cin >> k;// el tamaño de la lista
        cin >> dato; // entra al primer dato de la lista
        mayor = dato; // suponemos que el primer es el mayor y menor
        menor = dato;
        suma = dato;
        for (int i=2; i<=k; i++){ // procesar los datos de la list
            cin >> dato;
            if (dato>mayor) mayor = dato; // busca el mayor
            if (dato<menor) menor = dato; // busca el menor
            suma = suma + dato;  // acumula los datos para el promedio
        }
        if (suma%k == 0) // sin no hay decimales 
            cout << suma/k << " " << menor << " " << mayor << endl;
        else // si hay decimales
            cout<< fixed << setprecision(3) << (float)suma/k << " " << menor << " " << mayor << endl;
            
    }
    return 0;
}