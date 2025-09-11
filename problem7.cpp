#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double x, y;

    cin >> x >> y;

    double numerator = 3 * (x * x + 3);
    double denominator = (y / 4) + 3;
    double t = numerator / denominator;

    cout << fixed << setprecision(4);
    cout << "t=" << t << endl;

    return 0;
}