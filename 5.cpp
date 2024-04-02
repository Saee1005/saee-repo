#include <iostream>

using namespace std;

int main() {
    double base, height;
    cout << "Enter the base and height of the triangle: ";
    cin >> base >> height;
    double area = 0.5 * base * height;
    cout << "Area of the triangle: " << area << endl;
    return 0;
}
