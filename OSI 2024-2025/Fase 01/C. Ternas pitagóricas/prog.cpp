#include <iostream>
using namespace std;
int main()
{

    int n, a, b, c, c2, a2, b2;

   cin >> n; // numero de ternas
   
    for (int i=1; i <=n; i++){
        cin >> a >> b >> c; // valores de cada terna

        c2 = c * c;
        a2 = a * a;
        b2 = b * b;

        if (a2+b2 == c2)
            cout << 1 << " " << c2 << endl;
        else
            cout << 0 << " " << a2+b2 << endl;    
   }

    return 0;
}