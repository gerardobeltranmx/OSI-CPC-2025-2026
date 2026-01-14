#include <iostream>
using namespace std;
int main()
{
    int N, dato, M, suma, calculo;

    cin >> N; // numero de monedas
    cin >> dato; // primer moneda
    M = dato; // suponemos la primera como la mayor
    suma = dato; // acumulamos la primer moneda
    
    for (int i=2; i<=N; i++){
        cin >> dato;
        if (dato > M) M = dato;
        suma+=dato; // suma = suma + dato;
    }

    calculo = M * ( M + 2) ;

    if (calculo % 2 == 0) // es par
        cout << "Hamburguesas " << suma << endl;
    else 
        cout << "Tortas " << suma << endl;

    return 0;
}