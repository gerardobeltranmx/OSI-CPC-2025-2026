#include <iostream>
using namespace std;
int main()
{

    int dato, suma=0;
    
    do {
        cin >> dato;
        suma = suma + dato;
    }while(dato!=0);
    
    cout << suma << endl;    
    
    return 0;
}