#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    int N, i, mr;
    // entrada de numero cargas
    cin >> N;

    int l[N], k[N], p[N];

    // entrada de cargas de gasolina
    for (i=0;i<N; i++)
        cin >> l[i];
    
    // entrada de km recorridos
    for (i=0;i<N; i++)
        cin >> k[i];
   
    // entrada de precio por litro
    for (i=0;i<N; i++)
        cin >> p[i];
   
    mr=0;

    for (i=1; i<N; i++ ){
        if ((double)k[i]/l[i] > (double)k[mr]/l[mr])
            mr = i;
    }
        
    cout << mr+1<< fixed << setprecision(3) 
         << " " << (double)k[mr]/l[mr]
         << " " << p[mr]*l[mr] << endl;

    return 0;
}