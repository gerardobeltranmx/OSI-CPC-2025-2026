#include <iostream>
#include <cstring>

using namespace std;
int main()
{
    int i, j, contar=0;
    char S[1000], R[1000];

    cin >> S;
    // obtiene el inverso de S y lo pone en R
    for (j=0, i=strlen(S)-1; i>=0; i--, j++ ){
        R[j]=S[i];
    }
    // compara caracter a caracter ambas cadenas
    for (i=0; i<strlen(S); i++){
        if (tolower(S[i])== tolower(R[i])) 
              contar++;
    } 

    cout << contar << endl;



    
    return 0;
}