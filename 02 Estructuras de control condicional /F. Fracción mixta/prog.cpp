#include <iostream>
using namespace std;
int main()
{
    int n, m, a, b;
    cin >> n >> m;
    a = n / m;
    b = n % m;
    if ( b == 0 ){ // Es división exacta
        cout << a << endl;  
    }
    else { // si hay residuo
        cout << a <<  " " << b << "/" << m << endl;
    }
         

    return 0;
}