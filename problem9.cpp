#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double v0, v1, t;

    cin >> v0 >> v1 >> t;

    double acceleration = (v1 - v0) / t;

    if (acceleration == static_cast<int>(acceleration)) {
        cout << static_cast<int>(acceleration) << endl;
    } else {
        cout << fixed << setprecision(2);
        cout << acceleration << endl;
    }

    return 0;
}