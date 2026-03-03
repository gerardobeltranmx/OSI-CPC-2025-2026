#include <iostream>
using namespace std;
int main()
{

    int M, N;
    int m[100][100];
    cin >> M >> N;

    // entrada
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> m[i][j];
        }
    }

    // Recorrer de arriba a abajo y de derecha a izquierda
    for (int i = 0; i < M; i++)
    { // por filas de arriba a abajo
        for (int j = N - 1; j >= 0; j--)
        { // de derecha a izquierda
            cout << m[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}