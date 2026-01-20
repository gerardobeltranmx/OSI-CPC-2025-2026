#include <iostream>
using namespace std;
int main()
{
    long n;
    int d, digito, contador=0;
    cin >> n >> d;

    while ( n > 0){
        digito = n % 10; // extrae el digito de la derecha

        if ( digito == d ) contador++;

        n = n / 10; // elimina el digito de la derecha
    }

    switch(contador){
        case 0: 
            cout << "No se encontró el dígito " << d << endl;
            break;
        case 1:
            cout << "Se encontró una vez el dígito " << d << endl;
            break;      
        default :
            cout << "Se encontró "  << contador << " veces el dígito " << d << endl;
            break;
    }





    
    return 0;
}