#include <iostream>

int main() {
    int dividend, divisor, quotient, remainder;

    
    std::cout << "Enter the dividend: ";
    std::cin >> dividend;
    std::cout << "Enter the divisor: ";
    std::cin >> divisor;

    
    quotient = dividend / divisor;
    remainder = dividend % divisor;

    
    std::cout << "Quotient: " << quotient << std::endl;
    std::cout << "Remainder: " << remainder << std::endl;

    return 0;
}
