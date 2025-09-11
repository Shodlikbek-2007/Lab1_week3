#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double distance, efficiency, pricePerGallon;

    cin >> distance >> efficiency >> pricePerGallon;

    double gallonsNeeded = distance / efficiency;
    double cost = gallonsNeeded * pricePerGallon;

    cout << fixed << setprecision(3);
    cout << "The cost of driving is $" << cost << endl;

    return 0;
}
