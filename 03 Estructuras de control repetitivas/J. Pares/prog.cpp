#include <iostream>
using namespace std;
int main()
{
    int N, cuenta=0;
    long x;
    cin >> N; // numero de datos
    for (int i=0; i<N; i++){ // buscamos los pares
        cin >> x;
        if (x % 2 == 0){
            cout << "[" << x << "] "; // mostramos el numero par
            cuenta++;        // contamos el numero par encontrado
        }
    }

    if (cuenta==0){ // sino hay pares
        cout << ":(";
    }

    cout << endl;

    return 0;
}