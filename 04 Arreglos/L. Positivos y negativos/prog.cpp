#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int datos [100];
    int N;
    cin >> N; // numero de datos
    // entrada de datos
    for (int i=0; i < N ; i++){
        cin >> datos[i];
    }
    // ordena ascendente
    sort (datos, datos + N, less<int>());
    cout << "POSITIVOS" << endl;
    for (int i=0; i < N; i++)
        if (datos[i]>0)
            cout << datos[i] <<  endl;

// ordena descente
    sort (datos, datos + N, greater<int>());
    cout << "NEGATIVOS" << endl;
    for (int i=0; i < N; i++)
        if (datos[i]<0)
            cout << datos[i] <<  endl;




    
    return 0;
}