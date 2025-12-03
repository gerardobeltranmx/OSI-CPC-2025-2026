#include <iostream>
using namespace std;
int main()
{
    int A, B, P;
    cin >> A >> B;

    if (A>B){ // si el mayor es A
        P = 534 / A;
        
        if (534 % A > 0) // si faltan se compra una caja mas
            P++;

        cout << "A " << P << endl;
    }
    else { // si el mayor es B
        P = 534 / B;

        if (534 % B > 0) // si faltan se compra una caja mas
            P++;
        
            cout << "B " << P << endl;

    }
     


    return 0;
}