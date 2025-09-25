#include <iostream>
using namespace std;

int main() {
    int num, maximum = -1e9;  // very small number as initial max

    cout << "Enter numbers (0 to stop): " << endl;
    while (true) {
        cin >> num;
        if (num == 0) break;
        if (num > maximum) {
            maximum = num;
        }
    }

    if (maximum == -1e9)
        cout << "No numbers were entered." << endl;
    else
        cout << "Maximum number = " << maximum << endl;

    return 0;
}
