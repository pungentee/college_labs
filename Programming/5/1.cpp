#include <iostream>

int main() {
    float result = 1;
    for (int i = 3; i <= 66; i += 3) {
        result *= i;
    }
    std::cout << result << std::endl;

    return 0;
}
