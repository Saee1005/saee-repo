#include <iostream>
using namespace std;

int main() {
    char ch;
    
    // Take user input for a character
    cout << "Enter a character: ";
    cin >> ch;

    // Convert the character to its ASCII value
    int ascii_value = int(ch);

    // Print the ASCII value
    cout << "The ASCII value of " << ch << " is " << ascii_value << endl;

    return 0;
}
