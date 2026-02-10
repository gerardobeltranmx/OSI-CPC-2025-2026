#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int datos[5];

    for (int i=0; i < 5; i++){
        cin >> datos[i];
    }

    sort (datos, datos + 5, greater<int>());

    for (int i=0; i < 5; i++){
        cout << datos[i] << " ";
    }
    cout << endl;

    return 0;
}