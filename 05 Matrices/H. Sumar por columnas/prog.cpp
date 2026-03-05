#include <iostream>
using namespace std;
int main()
{
    int N, suma;
    int m[100][100];
    int a[100];
    cin >> N;

    for (int i=0; i <N; i++){
        for (int j=0; j<N; j++){
            if (i==j) { // es diagonal principal
                m[i][j] = i + 1 ; // el consecutivo
            }
            else { // cualquier otro elemento de la matriz
                m[i][j] = i + j ;    // suma de los indices
            }
            cout << m[i][j] << " "; // muestra la matriz generada
        }
        cout << endl;
    }

    cout << endl; // deja una linea en blanco
    // suma columnas y guarda en un arreglo
    for (int j=0; j<N; j++){
        suma = 0;
        for (int i=0; i<N; i++){
            suma = suma + m[i][j];  
        }
        a[j] = suma; 
    }
    // muestra arreglo
    for (int i=0; i<N; i++){
        cout << a [i] << " ";
    }
    cout << endl;



    
    return 0;
}