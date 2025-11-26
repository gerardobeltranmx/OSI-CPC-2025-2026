#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double R, C;

    cin >>  R;
    // muestra el valor inicial de R
    cout << fixed << R << endl;
    
    // calcular R + 5
    C = R + 5;
    cout << C << endl;
    
    // El valor anterior elevar al cuadrado
    C = pow(C, 2) ;
    cout << C << endl;
    
    // dividir el valor anterior entre R/3
    C = C / ( R / 3 );
    cout << C << endl;

    // elevar el valor anterior al cubo
    C = pow(C, 3);
    cout << C << endl;

    return 0;
}