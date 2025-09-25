#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of classes: ";
    cin >> n;

    double totalCredits = 0, totalPoints = 0;

    for (int i = 1; i <= n; i++) {
        double credit, mark;
        cout << "Enter credit and mark for subject " << i << ": ";
        cin >> credit >> mark;

        totalCredits += credit;
        totalPoints += credit * mark;
    }

    double GPA = totalPoints / totalCredits;
    cout << "Total GPA = " << GPA << endl;

    return 0;
}
