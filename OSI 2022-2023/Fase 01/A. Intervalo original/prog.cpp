#include <iostream>
using namespace std;
int main()
{

     int a, b, c;

     cin >> a >> b >> c;

     if ( c >= a and c <= b ) 
        cout << "INTERVALO\n";  
     else if (c < a)
        cout << "IZQUIERDA\n";
     else
        cout << "DERECHA\n";      

    return 0;
}