#include <iostream>
using namespace std;
int main()
{
     int M, N;
    cin >> M >> N;

    int m[M][N];

    // entrada
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> m[i][j];
        }
    }

    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (m[i][j]%2==0)
                cout << "*";

            cout << m[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}