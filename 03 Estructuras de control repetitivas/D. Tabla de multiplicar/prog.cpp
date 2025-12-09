#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int N, i, mult;

    cin >> N;

    for (i=1; i<=10; i++){
        mult = N * i;
        cout << fixed << setw(2) << i << " x " << setw(4) 
             << N <<" = " << setw(5)<< mult << endl;
    }
    return 0;
}