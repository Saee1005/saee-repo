#include <iostream>

using namespace std;

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    int greatest = (num1 > num2) ? num1 : num2;
    cout << "Greatest number: " << greatest << endl;
    return 0;
}
