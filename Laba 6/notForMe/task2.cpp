#include <iostream>

int main() {
    int number = 0;
    do {
        int sum = 0, temp = 0;

        std::cout << "Enter a number (to exit from program enter 0): ";
        std::cin >> number;
        temp = number;

        if (temp == 0) {
            break;
        } else if (temp < 10 && temp > -10) {
            sum = temp;
        } else {
            while (temp > 0) {
                sum += temp % 10;
                temp /= 10;
            }
        }

        std::cout << sum << std::endl;
    } while (number != 0);
    return 0;
}
