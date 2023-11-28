#include <iostream>

int main() {
    int quantity = 0;
    std::cout << "Enter quantity of lines (m): ";
    std::cin >> quantity;

    for (int i = 1; i <= quantity; i++) {
        for (int j = 0; j < i; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}
