#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int N;
    char cadena[200];
    cin >> N;

    cin.get(); // extrae el cambio de linea del buffer de teclado
    
    for (int i=0; i<N; i++){

        cin.getline(cadena,200);

        cout << "\"" << cadena << "\" tiene " 
             << strlen (cadena) << " caracteres" <<endl;

     }


    return 0;
}