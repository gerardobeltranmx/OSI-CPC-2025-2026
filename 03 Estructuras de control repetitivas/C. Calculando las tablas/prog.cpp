#include <iostream>
using namespace std;
int main()
{
    int N, i, mult;

    cin >> N;

    for (i=0; i <= 10; i++ ){
        mult = N * i ;
        cout << mult << endl; 
    }

    return 0;
}