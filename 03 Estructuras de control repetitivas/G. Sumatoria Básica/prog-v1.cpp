#include <iostream>
using namespace std;
int main()
{
   long N, suma = 0, i;
    

    cin >> N;

    for ( i = 1; i<=N; i++ ){

        suma = suma + i;

    }

    cout << suma << endl;

    return 0;
}