#include <iostream>
using namespace std;
int main()
{
    int A, B, N, T;
     
    long suma=0;

    cin >> A >> B >> N;

    for (int i=0; i < N; i++){
       
        T = A + i*B; // evalua un  termino
       // cout << T << " + " ; 
        suma = suma + T;
    }    
    // cout << endl;
    cout << suma << endl;

    return 0;
}