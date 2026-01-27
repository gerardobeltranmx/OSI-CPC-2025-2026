#include <iostream>
using namespace std;
int main()
{
    int N, promedio, suma=0, contar=0;
    
    cin >> N;
    int datos[N];
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
/*
cin >> N >> A >> B;

sumaA = A*(A+1) / 2;

sumaB = B*(B+1) / 2;

while (N<1000){
    if (N%2 == 0) N=N+sumaA;
    else
        N=N+SumaB;
}
*/