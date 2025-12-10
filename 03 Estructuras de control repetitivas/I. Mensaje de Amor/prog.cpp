#include <iostream>
using namespace std;
int main()
{

    int M, N;
    cin >> M; // numero de mensajes
    for (int i=1; i<=M; i++) {
        cin >> N; // numero de corazones
        for (int k=1; k<=N; k++){
            cout << "<3";
        }
        cout << endl;
    }
    
    return 0;
}