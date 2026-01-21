#include <iostream>
using namespace std;
int main()
{
    int N, pisos=0;

    cin >> N;
    while (N > 0){
      N = N - (pisos + 1);
      pisos++;
    }    

    cout << pisos << endl;

    return 0;
}