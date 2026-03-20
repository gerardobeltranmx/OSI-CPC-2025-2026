#include <iostream>
using namespace std;
int main()
{
    int i,j;
    bool ganoBeto=false, ganoEnrique=false;
    int m[3][3], suma=0;
    for (i=0; i<3; i++){
      for (j=0; j<3; j++){
        cin >> m[i][j];
        suma+=m[i][j];
      }
    }
    for (i=0; i<3;i++){
         // busca ganador por renglones
        if (m[i][0]==m[i][1] and m[i][1]==m[i][2] and m[i][0] != -1 ){
            if (m[i][0] == 0){
                ganoBeto=true;
            }
            else{
                ganoEnrique=true;
            }
        }

         // busca ganador por columnas
        if (m[0][i]==m[1][i] and m[1][i]==m[2][i] and m[0][i] != -1 ){
            if (m[0][i] == 0){
                ganoBeto=true;
            }
            else{
                ganoEnrique=true;
            }
        }




    }


    return 0;
}