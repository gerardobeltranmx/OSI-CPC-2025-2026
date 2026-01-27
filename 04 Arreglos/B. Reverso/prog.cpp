#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N; // numero de datos
    int datos[N];

    // entrada de datos para el arreglo
    for (int i=0; i < N; i++){
        cin >> datos[i];
    }
    // Salida en orden inverso 
    for (int i = N-1; i >=0; i-- ){
        cout << datos[i] << " ";
    }
    
    return 0;
}