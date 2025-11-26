#include <iostream>
using namespace std;
int main()
{
    int C, P, H, R, D, S, T;
    
    // entrada de datos 
    
    cin >> C >> P >> H;

    // cuantos puedo repartir
    R  = C - P;

    // cuantos reparte a cada uno
    D  = R / ( H + 1 ); // H + 1 es la suma de hijos mas la esposa

    // cuantos sobran en el reparto
    S = R % ( H + 1 );

    // con cuantos se queda don pancho
    T = P + S;

    cout << T << endl;


    return 0;
}