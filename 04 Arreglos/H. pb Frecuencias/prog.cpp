#include <iostream>
using namespace std;
int main()
{
    int P, n, v;

    cin >> P >> n;

    int profes[P];
    // aseguramos que tengan ceros votos los profesores al inicio
    for (int i=0; i<P; i++){
        profes[i] = 0;
    }

    for (int i=0; i<n; i++){ //procesar las encuestas
        cin >> v;
        profes[v-1]++;
    }

    for (int i=0; i<P; i++ ){
        cout << i+1 <<"-" << profes[i] << endl;
    }

    
    return 0;
}