#include <iostream>
using namespace std;
int main()
{
    int  dato;
    int N;
    cin >> N;
    int a[N];
    // entrada al arreglo a
    for (int i=0; i<N; i++){
        cin >> a[i];
    }
    // entrada del segundo conjunto de datos
    for (int i=0; i<N; i++){
        cin >> dato;
        cout <<  dato + a[i] << " ";
    }
   
    cout << endl;

    return 0;
}