#include <iostream>
using namespace std;
int main()
{
    int N;

    cin >> N;

    cout << N << " "; 

    while (N != 1){
        if (N % 2 == 0) { // es par?
            N = N / 2;
        }
        else { // en caso de ser impar
            N = 3 * N + 1;
        }
        cout << N << " ";
    }    

    cout << endl;
    
    return 0;
}