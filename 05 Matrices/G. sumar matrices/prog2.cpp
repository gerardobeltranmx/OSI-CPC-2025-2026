#include <iostream>
using namespace std;
int main()
{
    int N, dato;
    cin >> N; // tamaño de la matriz cuadrada
    
    int m1[N][N];
    
    
      // entrada matriz 1
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> m1[i][j];
        }
    }

     // entrada matriz 2, suma con matriz 1 y mostrar la salida
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> dato;
            cout << (m1[i][j] + dato) << " ";
        }
        cout << endl;
    }

    
    return 0;
}