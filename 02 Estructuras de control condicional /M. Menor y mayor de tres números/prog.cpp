#include <iostream>
using namespace std;
int main()
{
    int a, b, c, menor, mayor;
    cin >> a >> b >> c;
    // buscar el menor de 3 numeros
    if (a < b ){
        menor = a;
    }
    else {
        menor = b;
    }
    if ( c < menor){
        menor = c;
    }    
    
    // buscar el mayor de 3 numeros
    if ( a > b){
        mayor = a;
    }
    else {
        mayor = b;
    }
    if ( c > mayor ){
        mayor = c;
    }

    cout << menor << endl;
    cout << mayor << endl;

    return 0;
}