#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
    int N;
    bool consecutivo = true;
    int datos[1000];
    cin >> N; // tamaño arreglos
    // entrada de los datos del arreglo
    for (int i=0; i<N; i++){
        cin >> datos[i];
    }

    sort(datos, datos+N, less<int>());

    for (int i=0; i<N-1 and consecutivo==true; i++){
        if (datos[i]+1 != datos[i+1])
            consecutivo=false;
    }

    if (consecutivo==true)
        cout << "SI" << endl;
    else
        cout << "NO" << endl;



    
    return 0;
}