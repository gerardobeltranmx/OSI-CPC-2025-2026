#include <iostream>
#include <cstring>

using namespace std;
int main()
{
    int N, i, j;
    char linea[100];
    int c=0, v=0, d=0;
    char vocales[]="AEIOUaeiou";
    cin >> N;
    getchar();

    for (i=0; i<N; i++){
        cin.getline(linea, 100);
        for (j=0; j<strlen(linea); j++){
                if (  strchr(vocales, linea[j]) ){ // es vocal?
                    v++; 
                }
                else if  ( isdigit(linea[j]) ){ // es digito?
                    d++;
                }
                else if ( isalpha(linea[j]) ){ // es consonante?
                    c++;    
                }
        }
    }

    cout << c << " " << v << " " << d << endl;

    return 0;
}