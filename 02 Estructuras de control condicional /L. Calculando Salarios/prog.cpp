#include <iostream>
using namespace std;
int main()
{
    int s, h, t;
    cin >> s >> h;

    if (h<=40){
        t = s * h;
    }
    else if (h<=48){
        t = (s * 40) + (2 * s * (h - 40));
    }
    else {
        t = (s * 40) + (2 * s * 8) + (3 * s * (h - 48));
    }

    cout << t << endl;


    return 0;
}