#include <iostream>
using namespace std;

int main() {
    double length, width;

    cout << "Enter length: ";
    cin >> length;

    cout << "Enter width: ";
    cin >> width;

    double area = length * width;

    cout << "Area of rectangle = " << area;

    return 0;
}