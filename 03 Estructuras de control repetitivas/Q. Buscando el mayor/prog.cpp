#include <iostream>
using namespace std;
int main()
{
    int n, x, mayor;
    cin >> n;

    cin >> mayor; // suponemos que el primer es el mayor

    for (int i=1; i<n; i++){ // buscamos en el resto de los datos el mayor
        cin >> x;
        if (x > mayor){
            mayor = x;
        }
    }

    cout << mayor << endl;

    return 0;
}