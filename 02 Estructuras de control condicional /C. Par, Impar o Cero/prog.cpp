#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;

    if (a==0){
        cout << "CERO" << endl;
    }
    else if (a % 2 == 0){
        cout << "PAR" << endl;
    }
    else{
        cout << "IMPAR" << endl;
    }
    
    return 0;
}