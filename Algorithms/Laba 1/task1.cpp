#include <iostream>

int main() {
    setlocale(LC_ALL, "en_US.UTF-8");

    int n = 10;
    int count = 0;
    std::string symbol;

    for (int i = 0; i < n; i++) {
        std::cout << "Enter symbol: ";
        std::cin >> symbol;

        if (symbol == "a" || symbol == "A" || symbol == "а" || symbol == "А") {
            count += 1;
        }
    }

    std::cout << "Count: " << count << std::endl;

    return 0;
}
