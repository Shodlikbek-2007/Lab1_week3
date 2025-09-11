#include <iostream>
using namespace std;

int main() {

    int a = 189;
    char b = 'B';


    float result1 = static_cast<float>(a) / 3;


    int result2 = b;

    float result3 = static_cast<float>(a + b) / 5;

    char result4 = b + (a / 10) - 1;

    cout << result1 << " " << result2 << " " << result3 << " " << result4 << endl;

    return 0;
}