#include <iostream>

int main() {
    int firstNumber = 0, secondNumber = 0;
    bool isNotPrime = false;
    std::cout << "Enter first number: ";
    std::cin >> firstNumber;
    std::cout << "Enter second number: ";
    std::cin >> secondNumber;

    while (firstNumber <= secondNumber) {
        int i = 2;
        while (i < firstNumber) {
            if (firstNumber % i == 0) {
                isNotPrime = true;
                break;
            }
            i++;
        }
        if (isNotPrime) {
            std::cout << firstNumber << " is not prime" << std::endl;
        } else {
            std::cout << firstNumber << " is prime" << std::endl;
        }
        isNotPrime = false;
        firstNumber++;
    }
    return 0;
}
