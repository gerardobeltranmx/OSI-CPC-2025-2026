#include <iostream>
using namespace std;
int main()
{
    int u, t, total, min_dia = 60*24;
    int d, h, m;
    cin >> u >> t;

    total = u * t; // total de minutos de fabricación

    d = total / min_dia; // dias de fabricación

    total = total % min_dia; // minutos restantes

    h = total / 60; // horas de fabricación

    m = total % 60; // min de fabricación

    cout << d << " " << h << " " << m << endl;

    return 0;
}