#include <iostream>
using namespace std;
int main()
{

    double a1, b1, c1, a2, b2, c2;
    double x, y;

    cin >> a1 >> b1 >> c1;
    cin >> a2 >> b2 >> c2;

    x = (c1 - b1 * y) / a1 ;
    y = (c2 - a2 * x) / b2 ;

    y = (c2 - a2*( c1 - b1 * y / a1 )) / b2 ;
    
    
    return 0;
}