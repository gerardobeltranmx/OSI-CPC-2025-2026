#include <iostream>
#include <algorithm>
using namespace std;
int main() {
   int N;
    cin >> N;  // Número de datos a ordenar
   int datos[N];

   // Entrada de datos
   for (int i=0; i<N; i++)
      cin >> datos[i];

   // Ordenamiento ascendente de los datos
   sort(datos, datos + N, less<int>());
  
 // Salida de los datos ordenados
   for (int i=0; i<N; i++)
      cout << datos[i] << endl;  
  
 return 0;
}
