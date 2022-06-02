#include <iostream>
#include <math.h>
using namespace std;
#define N 10000

// 20520562 - Nguyen Dinh Kha
// a = 0.2, b = 0.2 and c = 5.7 . "a" was chosen as the bifurcation parameter
// properties of a = 0.1, b = 0.1, and c = 14 have been more commonly used

int main()
{
    double dt = 0.002; 
    double dx, dy, dz;

    float a = 0.2;  // standard parameter value selected by Rossler
    float b = 0.2;
    float c = 5.7;

    double x = 0; // strange attractor with unidentified variables
    double y = 0;
    double z = 0;

    for (int i = 0; i < N; i++) 
    {
        // 3 coupled non-linear differential equations: 
        dx = x + (-y - z) * dt;
        dy = y + (x + a * y) * dt;
        dz = z + (b + z * (x - c)) * dt;
        x = dx;
        y = dy;
        z = dz;
        if (i > 150)
            cout << i << "  " << x << "  " << y << "  " << z << endl;
    }
    return 0;
}
