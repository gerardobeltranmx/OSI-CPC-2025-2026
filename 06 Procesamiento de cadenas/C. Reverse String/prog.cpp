#include <iostream>
#include <cstring>

using namespace std;
int main()
{
    char cadena[1000];
    
    cin.getline(cadena,1000);

    for (int i=strlen(cadena)-1; i>=0; i--){

        cout << cadena[i];

    }

    cout << endl;

    
    return 0;
}