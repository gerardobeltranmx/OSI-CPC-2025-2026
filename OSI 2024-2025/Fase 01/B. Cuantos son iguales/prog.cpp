#include <iostream>
using namespace std;
int main()
{
    int a, b, c, cuenta=0;
    cin >> a >> b >> c;

    if (a==b and b==c) 
        cuenta=3;
    else if (a==b or b==c or c==a)
        cuenta=2;

    cout << cuenta << " " << a+b+c << endl;    


    
    return 0;
}