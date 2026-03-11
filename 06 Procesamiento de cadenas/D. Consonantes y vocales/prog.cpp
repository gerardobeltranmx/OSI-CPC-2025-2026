#include <iostream>
#include <cstring>

using namespace std;
int main()
{

    char s[80];
    int c=0, v=0;
    cin >> s;


    for (int i=0; i<strlen(s); i++){

        switch (s[i])
        {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
                v++;
                break;
        default:
                c++;
                break;
        }

    }
    cout << c << " " << v << endl;


    
    return 0;
}