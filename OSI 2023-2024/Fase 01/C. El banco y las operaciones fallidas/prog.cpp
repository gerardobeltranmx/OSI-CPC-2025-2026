#include <iostream>
using namespace std;
int main()
{
    int N, s, t, c, d=0, r=0, f=0;
    cin >> N >> s; // obtiene numero de operaciones y saldo inicial
    for (int i=1; i<=N; i++){ // entra y procesamiento de las operaciones

        cin >> t >> c ; // tipo de operación y cantidad

        switch (t){
            case 1: // deposito
                d = d + c; 
                s = s + c; 
                break;     
            case 2: // retiro
                if (s>=c){ // validad si tiene saldo suficiente
                    r = r + c;
                    s = s - c;
                }
                else 
                    f++;

                break;
        }
    }
    cout << d << " " << r << " " << f << " " << s << endl;

    
    return 0;
}