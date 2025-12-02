#include <iostream>
using namespace std;
int main()
{
    int n, m, a, b;
    cin >> n >> m;
    a = n / m;
    b = n % m;
    if ( b == 0 ){
        cout << a << endl;  
    }
    else {
        cout << a <<  " " << b << "/" << m << endl;
    }
         

    return 0;
}