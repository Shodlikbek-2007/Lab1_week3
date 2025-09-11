#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    const double pi = 3.141592653589793;
    double diameter;

    cin >> diameter;

    double radius = diameter / 2.0;

    double area = 4 * pi * pow(radius, 2);

    cout << fixed << setprecision(3);
    cout << "Area: " << area << endl;

    return 0;
}