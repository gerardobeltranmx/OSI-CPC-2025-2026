#include <iostream>
using namespace std;
int main()
{
    int p, c;
    char n;
    
    cin >> p; // numero de pedido
    cin >> n; // inicial del cliente
    cin >> c; // numero de cafes
    
    cout << "Numero de pedido: " << p << endl;
    cout << "Cliente: " << n << endl;
    cout << "Cafes: " << c << " ($45.15)" << endl;

    return 0;
}