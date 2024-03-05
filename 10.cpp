#include <iostream>
using namespace std;

int main() {
    int decimal, binary = 0, i = 1;
    cout << "Enter a decimal number: ";
    cin >> decimal;

    while (decimal != 0) {
        binary += (decimal % 2) * i;
        decimal /= 2;
        i *= 10;
    }

    cout << "Binary equivalent: " << binary;
    return 0;
}
