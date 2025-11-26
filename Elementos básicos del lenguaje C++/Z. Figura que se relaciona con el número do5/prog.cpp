#include <iostream>
using namespace std;

int main() {
  int a,b,c,d,e,f,g;
  double trapecioSuperior,trapecioInferior,rectangulo,superficie;
  
  cin >> a >> b >> c >> d >> e >> f >> g;
  
  // trapecioSuperior = ((a+e)*b)/2.0;
  trapecioSuperior = (double)((a+e)*b)/2;
  rectangulo = e*c;
  //trapecioInferior= ((g+f)*d)/2.0;
  trapecioInferior= (double)((g+f)*d)/2;
  
  superficie=trapecioSuperior+rectangulo+trapecioInferior;
  
  cout << "Superficie: " << superficie << endl;
  
  return 0;
}