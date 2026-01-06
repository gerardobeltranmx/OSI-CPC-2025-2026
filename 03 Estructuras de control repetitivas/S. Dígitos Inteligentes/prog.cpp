#include <iostream>
using namespace std;
int main()
{
    int L, R, num, suma=0, dig, N;

    cin >> N; // numero de casos
    for (int c=1; c<=N; c++){ // calcula todos los casos
        suma=0;
        cin >> L >> R;
        for (int i=L; i<=R; i++ ){ // procesamiento para un rango de numeros
            num = i;

            while (num > 0){ // separacion en digitos de un numero 
                dig = num % 10;
                suma = suma + dig;
                num = num / 10;
            }
        }    
        cout << suma << endl;
    }   
    return 0;
}