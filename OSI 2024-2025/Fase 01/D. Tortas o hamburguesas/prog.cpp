#include <iostream>
using namespace std;
int main()
{
    int N, dato, M, suma, calculo;

    cin >> N; // numero de monedas

    cin >> dato;
    M = dato;
    suma = dato;
    
    for (int i=2; i<=N; i++){
        cin >> dato;
        if (dato > M) M = dato;

        suma+=dato; // suma = suma + dato;

    }

    calculo = M * ( M + 2) ;

    if (calculo % 2 == 0) // es par
        cout << "Hamburguesa " << suma << endl;
    else 
        cout << "Tortas " << suma << endl;
        
    return 0;
}