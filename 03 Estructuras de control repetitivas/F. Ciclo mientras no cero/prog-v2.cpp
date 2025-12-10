#include <iostream>
using namespace std;
int main()
{

    int dato, suma=0;

    cin >> dato;  
    suma = dato;  
    
    while(dato!=0){
        cin >> dato;
        suma = suma + dato;
    }
    
    cout << suma << endl;    
    
    return 0;
}