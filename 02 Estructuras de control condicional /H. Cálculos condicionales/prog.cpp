#include <iostream>
using namespace std;
int main()
{
    int N, cuenta=0;
    cin >> N;

    if ( N%2 == 0 ){ // es par?
        N=N/2;
        cuenta++;
    }
    else {
        N= N + 1; // N++;
        cuenta++; 
    }

    if (N>=100){
        N=N/100;
        cuenta++;
    }
    else if (N>=10){
        N=N/10;
        cuenta++;
    }

    if (N % 3 == 0){
        N--;
        cuenta++;
    }

    cout << N << " " << cuenta << endl;

    

    return 0;
}