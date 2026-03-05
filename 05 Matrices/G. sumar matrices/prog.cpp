#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N; // tamaño de la matriz cuadrada
    
    int m1[N][N];
    int m2[N][N];
    int m3[N][N];
    
      // entrada matriz 1
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> m1[i][j];
        }
    }

     // entrada matriz 2
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> m2[i][j];
        }
    }

     // sumar matriz 1 y matriz 2
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            m3[i][j] = m1[i][j] + m2[i][j];
        }
    }

      // mostrar matriz 3
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << m3[i][j] << " ";
        }
        cout << endl;
    }

    
    return 0;
}