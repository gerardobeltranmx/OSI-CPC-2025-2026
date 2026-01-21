#include <iostream>
using namespace std;
int main()
{
    int N, pisos=0;

    //cin >> N;
    scanf("%d", &N);
    while (N > 0){
      N = N - (pisos + 1);
      pisos++;
    }    

    //cout << pisos << endl;
    printf("%d\n",pisos );
    return 0;
}