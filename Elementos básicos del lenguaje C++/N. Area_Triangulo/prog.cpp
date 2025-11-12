#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double base, altura, area;

    cin >> base;
    
    cin >> altura;
    
    area = (base * altura) / 2;
    
    cout << fixed << setprecision(3) <<  area << endl;

    return 0;
}