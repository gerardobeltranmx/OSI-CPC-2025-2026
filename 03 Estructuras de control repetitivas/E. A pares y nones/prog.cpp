#include <iostream>
using namespace std;
int main()
{
    int N, i, C, sumaA=0, sumaN=0, cuentaA=0, cuentaN=0;
    int promedioA, promedioN;
    cin >> N;

    for (i=1; i<=N; i++){

        cin >> C;

         if (C % 2 == 0){
            sumaA=sumaA+C;
            cuentaA++;
         }
         else {
            sumaN=sumaN+C;
            cuentaN++;
         }
    }     
    promedioA = sumaA / cuentaA;
    promedioN = sumaN / cuentaN;

    if (promedioA > promedioN){
        cout << "APARICIO" << endl;
    }
    else if (promedioN > promedioA){
        cout << "NONILA" << endl;
    }
    else{
        cout << "EMPATE!" << endl;
    }

  
    return 0;
}