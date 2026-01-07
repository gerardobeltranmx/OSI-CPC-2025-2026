#include <iostream>
using namespace std;
int main()
{
    /*
      - a es la cerca corta y b es la cerca larga
      p = 5*a + 4*b
      2*b=3*a
      b = 3*a/2
      p = 5*a + 4*3*a/2
      p = 5*a + 6*a
      p = 11*a
      a  = p / 11
      2*b = 3*p/11
      b = 3*p/11/2
    */
     int p, a, b, m;
     cin >> p; // entrada del perimetro  
      a  = p / 11;
      b = 3*p/11/2;
      m = 9*a + 6*b;

      cout << m << endl;  // metros 

    
    return 0;
}