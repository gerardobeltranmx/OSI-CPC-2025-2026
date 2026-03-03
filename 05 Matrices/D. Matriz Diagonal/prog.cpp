#include <iostream>
using namespace std;
int main()
{
    int N, valor;
    bool estado=true;
    int m[100][100];
    cin >> N;
   

    // entrada
    for (int i=0; i<N; i++){
        for(int j=0;j<N; j++){
            cin >> m [i][j];
        }
    }
     valor = m[0][0]; 
    // analizamos la diagonal 
    for (int i=1; i<N and estado==true; i++){

        if (valor!=m[i][i])
            estado=false;

    }
    // salida
    if (estado==true)
        cout << "SI" << endl;
    else    
        cout << "NO" << endl;    

    
    return 0;
}