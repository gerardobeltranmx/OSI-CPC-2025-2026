#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;
int main()
{

    char S1[150], S2[150];

    cin >> S1;
    cin >> S2;

    sort(S1, S1+strlen(S1), less<char>());

    sort(S2, S2+strlen(S1),  less<char>());
    
    if ( strcmp(S1, S2) == 0 )
        cout << "ANAGRAMA!" << endl;
    else
        cout << "No :(" << endl;    

   
    /*
    bool anagrama = true;
    for (int i=0; i<strlen(S1) and anagrama==true, i++){
        if (S1[i]!=S2[i])
             anagrama=false;
    }
   
   
    if (anagrama)
        cout << "ANAGRAMA!" << endl;
    else
        cout << "No :(" << endl;    

 */

    return 0;
}