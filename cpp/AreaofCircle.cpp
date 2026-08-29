#include <iostream>
using namespace std;

int main() {
    double radius;

    cout << "Enter radius: ";
    cin >> radius;

    double area = 3.14159 * radius * radius;

    cout << "Area of circle = " << area;

    return 0;
}