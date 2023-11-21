#include <iostream>

int fibonacci(int number) { return number == 1 ? 1 : fibonacci(number - 1) * number; }

int main() {
    int x;
    std::cout << "Enter x: ";
    std::cin >> x;
    std::cout << "x!: " << fibonacci(x) << std::endl;
}
