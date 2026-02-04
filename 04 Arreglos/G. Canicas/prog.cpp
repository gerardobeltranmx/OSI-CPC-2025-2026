#include <iostream>
using namespace std;
int main()
{
    int N, C, pos;
    cin >> N;
    cin >> C;
    int vasos[N]; // vasos donde caen las canicas
    
    // poner el arreglo en ceros
    for (int i=0; i<N; i++)
        vasos[i]=0;
    
    for (int i=1; i<=C; i++){
        cin >> pos; // en que vaso cae la canica
        vasos[pos-1]= vasos[pos-1] + 1;
    }
    // recorrer los vasos y mostrar su contenido
    for (int i=0; i<N; i++){
        cout << vasos[i]<< endl;
    }


    
    return 0;
}