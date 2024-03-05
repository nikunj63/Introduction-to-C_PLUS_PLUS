#include <iostream>
using namespace std;

int main() {
    double num1, num2, num3;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;
    double smallest = (num1 < num2) ? ((num1 < num3) ? num1 : num3) : ((num2 < num3) ? num2 : num3);
    cout << "Smallest number: " << smallest << endl;
    return 0;
}