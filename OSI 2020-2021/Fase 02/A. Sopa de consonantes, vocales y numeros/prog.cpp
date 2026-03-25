#include <iostream>
#include <ctring>

using namespace std;
int main()
{
    int N, i, j;
    char linea[100];
    int c=0, v=0, d=0;
    char vocales[]="AEIOU";
    cin >> N;

    getchar();

    for (i=0; i<N; i++){
        cin.getline(linea, 100);
        for (j=0; j<strlen(linea); j++){
                if (  strchr(vocales, toupper(linea[j])) ){ // es vocal?
                    v++; 
                }
                else if  ( isdigit(linea[j]) ){ // es digito?
                    d++;
                }
                else if ( isapha(linea[j]) ){ // es consonante?
                    c++;    
                }
        }
    }

    cout << c << " " << v << " " << d << endl;
    
    return 0;
}