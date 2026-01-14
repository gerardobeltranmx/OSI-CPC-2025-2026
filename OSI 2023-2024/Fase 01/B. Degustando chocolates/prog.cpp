#include <iostream>
using namespace std;
int main()
{
    int T, A, B, C, D, E, suma, cuenta=0;

    cin >> T;

    cin >> A >> B >> C >> D >> E;

    suma = A + B + C + D + E;

    if (A==T) cuenta++;
    if (B==T) cuenta++;
    if (C==T) cuenta++;
    if (D==T) cuenta++;
    if (E==T) cuenta++;

    cout << cuenta << " " << suma << endl;
    
    return 0;
}