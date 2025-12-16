#include <iostream>
using namespace std;
int main()
{
    int t, digito, par=0;
    cin >> t;

    while (t>0){
        digito = t % 10; // extrae el digito de la derecha
    
        if (digito % 2 == 0){ // determina si es par
          par++;
        }

        t = t / 10; // obtiene el resto del numero, quitando el digito de la derecha
    }    

    if (par % 2 == 0){ // pregunta si es par cuadrado
        cout << "SI" << endl;
    }
    else{
        cout << "NO" << endl;
    }

    return 0;
}