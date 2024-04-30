#include <iostream>

int getSumOfNumbers(int number) {
    if (number < 10 && number > -10) return number;

    int result = 0;
    while (number > 0) {
        result += number % 10;
        number /= 10;
    }
    return result;
}

int main() {
    int number = 0;
    do {
        std::cout << "Enter a number (to exit from program enter 0): ";
        std::cin >> number;

        if (number == 0) {
            break;
        }

        std::cout << getSumOfNumbers(number) << std::endl;
    } while (number != 0);
    return 0;
}
