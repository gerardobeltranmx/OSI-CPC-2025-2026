#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double radio, area;
    
    const double PI = 3.1416;
    
    cin >> radio;
    
    area = PI * radio * radio;
    
    cout << fixed<< setprecision(2)<< "El radio es: " << area << endl;   
    
    return 0;
}