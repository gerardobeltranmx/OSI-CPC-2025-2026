#include <iostream>
using namespace std;
int main()
{
    int M, N, i, hoja;
    cin >> M >> N ;
    
    bool libro[N];

    for (i=0; i<N; i++) 
            libro[i]=false;

    for (i=0; i<M; i++){
        cin >> hoja;
        libro[hoja-1]=true;
    }

    for (i=0; i<N; i++){
        if (libro[i]==false) cout << i+1 << " "; 
    }
    
    cout << endl;


    return 0;
}