#include <iostream>
using namespace std;
int main()
{
    int F, C;
    cin >> F >> C;
    int m[F][C];
    // entrada de datos
    for (int i=0; i<F; i++){
        for (int j=0; j<C; j++){
            cin >> m[i][j];     
        }
    }

    // salida de datos
    for (int i=F-1; i>=0; i--){
        for (int j=0; j<C; j++){
            cout << m[i][j] << " ";     
        }
        cout << endl;
    }

    
    return 0;
}