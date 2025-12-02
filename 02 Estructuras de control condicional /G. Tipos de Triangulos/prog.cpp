#include <iostream>
using namespace std;
int main()
{
    int x, y, z;
    cin >> x >> y >> z;

    if ( x==y and z==x ){
        cout <<"equilatero" << endl;
    }
    else if ( x==y or y==z or z==x ){
        cout <<"isosceles" << endl;
    }
    else  {
        cout << "escaleno" << endl;
    }


    return 0;
}