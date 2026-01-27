#include <iostream>
using namespace std;
int main()
{
    int N, promedio, suma=0, contar=0;
    int datos[100];
    cin >> N;
    for (int i=0; i<N; i++){
        cin >> datos[i];
        suma = suma + datos[i];
    }
    promedio = suma / N;

    for (int i=0; i<N; i++){
        if (datos[i]>promedio) contar++;
    }

    cout << contar << endl;


    

    return 0;
}