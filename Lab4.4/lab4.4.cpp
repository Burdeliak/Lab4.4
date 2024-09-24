#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double R, x_s, x_e, dx;
    const double P = 3.14159;
    
    cout << " R: ";
    cin >> R;
    cout << "xs: ";
    cin >> x_s;
    cout << "xe: ";
    cin >> x_e;
    cout << " dx: ";
    cin >> dx;

    cout << fixed << setprecision(2);
    cout << setw(10) << "x" << setw(10) << "y" << endl;
    cout << "--------------------" << endl;
    
    for (double x = x_s; x <= x_e; x += dx) {
        double y;
       
        if (x >= -7 - R && x <= -7 + R) {
            y = sqrt(R * R - (x + 7) * (x + 7));
        }
        else if (x > -7 + R && x <= -4) {
            y = 0;
        }
        else if (x > -4 && x <= P) {
            y = sin(x);
        }
        else if (x > P) {
            y = (x - P) + 1;
        }
        
        cout << setw(10) << x << setw(10) << y << endl;
    }

    return 0;
}


