#include <iostream>
using namespace std;
int main()
{
    int k, N;

    cin >> N;

   for (k=1; k <= N; k++){ // forma la piramide ascendente
        for (int i=1; i<=k; i++){
            cout << k;
        }
        cout << endl;
    }

    for (k=N-1; k >=1; k--){ // forma la piramide descendente
        for (int i=1; i<=k; i++){
            cout << k;
        }
        cout << endl;
    }


    return 0;
}