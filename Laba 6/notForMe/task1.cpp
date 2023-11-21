#include <iostream>

int main() {
    int number = 0, count = 0, sum = 0;
    do {
        std::cout << "Enter a number: ";
        std::cin >> number;
        count++;
        if (number >= -4 && number < 11) {
            sum += number;
        }
    } while ((number < 100 || number > 999) && (number > -100 || number < -999));

    std::cout << "Amount of numbers: " << count << std::endl;
    std::cout << "Sum of numbers in [-4;11): " << sum << std::endl;
}
