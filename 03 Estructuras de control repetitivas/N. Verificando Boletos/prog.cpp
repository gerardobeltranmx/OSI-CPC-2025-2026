#include <iostream>
using namespace std;
int main()
{
    int N, M, digito, sumaIzq=0, sumaDer=0;

    cin >> N; // numero de digitos

    M = N / 2; // calculo de la mitad

    for (int i=0; i < N; i++){

        cin >> digito; // entrada de los digitos

        if (i < M)  // es de la izquierda?
            sumaIzq = sumaIzq + digito;
        else // se lo sumamos a la derecha
            sumaDer = sumaDer + digito;
    }

    if (sumaIzq == sumaDer) // es valido?
        cout << sumaIzq << " " << 1 << endl;
    else
        cout << sumaIzq+sumaDer << " " << 0 << endl;

    return 0;
}