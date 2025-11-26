#include <iostream>
using namespace std;
int main()
{
    int numero, resultado;
    cin >> numero;

    resultado = numero % 2;  

    if ( resultado == 0)
    {
        cout << "Par" << endl;
    }
     else
    {
        cout << "Impar" << endl;
    }

    return 0;
}