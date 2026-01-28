#include <iostream>
using namespace std;
int main()
{   
    int NA, NB, M, mayor;
    // Entrada de datos del conjunto A
    cin >> NA;
    int A[NA];
    for (int i=0; i < NA; i++){
        cin >>A[i];
    }

    // Entrada de datos del conjunto B
    cin >> NB;
    int B[NB];
    for (int i=0; i < NB; i++){
        cin >>B[i];
    }

    cout << "Los elementos del vector resultante son:" << endl;
    if (NA > NB){
        for (int i=0; i < NB; i++){
            M = B[i] * A[i];
            cout << M << " ";
        }
        for (int i=NB; i<NA; i++ ){
            cout << A[i] << " ";
        }
    }
    else{
        for (int i=0; i < NA; i++){
            M = B[i] * A[i];
            cout << M << " ";
        }
        for (int i=NA; i<NB; i++ ){
            cout << B[i] << " ";
        }

    } 
       
    // mayor = NA>NB ? NA : NB;   

    
    





    return 0;
}