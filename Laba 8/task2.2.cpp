#include <iomanip>
#include <iostream>

int main() {
    int quantity = 0;
    std::cout << "Enter quantity of lines (m): ";
    std::cin >> quantity;

    for (int i = 0; i < quantity; i++) {
        std::cout << std::setw(quantity - i);
        for (int j = 0; j < i * 2 + 1; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}
