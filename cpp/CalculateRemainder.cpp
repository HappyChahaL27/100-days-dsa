#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    int remainder = a % b;

    cout << "Remainder = " << remainder;

    return 0;
}