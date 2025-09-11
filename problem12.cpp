#include <iostream>
using namespace std;

int main() {
    int totalStudents = 241;
    int numGroups = 11;

    int baseStudents = totalStudents / (numGroups - 1);

    int lastGroup = totalStudents % (numGroups - 1);

    int firstGroup = baseStudents;

    if (lastGroup == 0) {
        lastGroup = baseStudents;
    }

    cout << "In first group: " << firstGroup << endl;
    cout << "In last group: " << lastGroup << endl;

    return 0;
}