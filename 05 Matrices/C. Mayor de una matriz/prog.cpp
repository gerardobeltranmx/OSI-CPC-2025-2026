#include <iostream>
using namespace std;
int main()
{
    int M,N, mayor;
    int m[200][200];
    cin >> M >> N;

    mayor = m[0][0];

    for (int i=0; i<M; i++){
        for(int j=0;j<N; j++){
            if (m[i][i]>mayor){
                mayor=m[i][j];
            }
        }
    }

    cout << mayor << endl;

    
    return 0;
}