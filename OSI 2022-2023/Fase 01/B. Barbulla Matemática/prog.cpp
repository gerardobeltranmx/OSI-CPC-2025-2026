#include <iostream>
using namespace std;
int main()
{

    int n, Sn=0;

    //cin >> n ;
    scanf("%d", &n);
    //for (int i=1; i <=n; i++)
    //    Sn = Sn + i;

    for (int i=1; i<=n; i++)
        Sn = Sn + i * ( i + 1 ) / 2;

   // cout << Sn << endl;     
   printf("%d\n", Sn); 
    return 0;
}