#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double side1, side2;
    cout << "Enter the lengths of the two sides of the right-angle triangle: ";
    cin >> side1 >> side2;
    double hypotenuse = sqrt(side1 * side1 + side2 * side2);
    cout << "Hypotenuse of the right-angle triangle: " << hypotenuse << endl;
    return 0;
}
