#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double x, y ,z, resultado;
   // datos de entrada 
   cin >> x >> y >> z;

    // formula rara 
    resultado =  ( x + x * (y + z*z) ) / ((x + M_PI)* (y + M_PI));

    // salida de resultados
    cout << fixed << setprecision(6) << resultado << endl;

    return 0;
}

