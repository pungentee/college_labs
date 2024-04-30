#include<iostream>
#include<cmath>

int main() {
    double x;
    for (int i = 0; i < 5; i++) {
        std::cout << "Enter x: ";
        std::cin >> x;
        std::cout << "Result: " << pow(sin(x), 5) + fabs(5 * x - 1.5) << std::endl;
    }

    return 0;
}
