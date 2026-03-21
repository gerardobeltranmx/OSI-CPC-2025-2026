#include <iostream>
using namespace std;
int main()
{
    int M, N, i, j;

    cin >> M >> N;
    int m[M][N];

    int sumaFilas[M];
    int sumaColumnas[N];

    int mayorFilas[M];
    int mayorColumnas[N];

    int menorFilas[M];
    int menorColumnas[N];

    // entrada de datos de la matriz
    for (i=0; i<M; i++)
        for (j=0; j<N; j++)
            cin >> m[i][j];

    // Suma Filas
    for (i=0;i<M; i++){
        sumaFilas[i]=0;
        for (j=0;j<N; j++){
            sumaFilas[i]+=m[i][j];
        }
    }
     // Suma Columnas
    for (j=0;j<N; j++){
        sumaColumnas[j]=0;
        for (i=0;i<M; i++){
            sumaColumnas[j]+=m[i][j];
        }
    }
    // Buscar mayor y menor por cada fila
    for (i=0; i<M; i++){
        mayorFilas[i]=m[i][0];
        menorFilas[i]=m[i][0];
        for (j=1; j<N; j++){
            if (m[i][j]>mayorFilas[i]) // mayor de la fila
                mayorFilas[i]=m[i][j];

            if (m[i][j]<menorFilas[i]) // menor de la fila
                menorFilas[i]=m[i][j];
        }
    }

 // Buscar mayor y menor por cada columna
    for (j=0; j<N; j++){
        mayorColumnas[j]=m[0][j];
        menorColumnas[j]=m[0][j];
        for (i=1; i<M; i++){
            if (m[i][j]>mayorColumnas[j]) // mayor de la columnas
                mayorColumnas[j]=m[i][j];

            if (m[i][j]<menorColumnas[j]) // menor de la columnas
                menorColumnas[j]=m[i][j];
        }
    }
    
    // Salidas
    // Suma de columnas
    for (j=0; j<N; j++)
        cout << sumaColumnas[j] << " ";
    cout << endl;

    // Suma de filas
    for (i=0; i<M; i++)
        cout << sumaFilas[i] << " ";
    cout << endl;
    

    
    return 0;
}