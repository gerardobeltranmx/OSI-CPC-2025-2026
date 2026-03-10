#include <iostream>
#include <cstring>

using namespace std;
int main()
{
    char cadena[100];
    
    cin.getline(cadena,100);

    for (int i=strlen(cadena)-1; i>=0; i--){

        cout << cadena[i];

    }

    cout << endl;

    
    return 0;
}