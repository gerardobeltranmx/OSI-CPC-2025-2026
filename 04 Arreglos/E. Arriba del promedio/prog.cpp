#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    int n;
    int calif[1000];
    int suma, contar, c;
    float prom, porcentaje;
    cin >> c; // cantidad de casos
    for (int k=0; k< c ; k++){
        suma=0;
        contar=0;
        cin >> n; // entrada a numero de calificaciones
        for (int i=0; i < n; i++){
            cin >> calif[i];
        // suma = suma + calif[i];
            suma+=calif[i]; // entrada a calificaciones
        }
        prom = (float)suma / n;

        for (int i=0; i<n; i++){
            if(calif[i] > prom) contar++;
        }
        porcentaje = (float)contar / n * 100;
        cout << fixed << setprecision(3) << porcentaje << endl;
    }    
    return 0;
}