#include <iostream>
using namespace std;
int main()
{
    int a[100], b[100], c[100];
    int N;
    cin >> N;
    // entrada al arreglo a
    for (int i=0; i<N; i++){
        cin >> a[i];
    }
    // entrada al arreglo b 
    for (int i=0; i<N; i++){
        cin >> b[i];
    }
    // suma en paralelo de a y b
    for (int i=0; i<N; i++){
        c[i] = a[i] + b[i];
    }
    // salida del arreglo c
    for (int i=0; i<N; i++){
        cout << c[i] << " ";
    }
    cout << endl;

    return 0;
}