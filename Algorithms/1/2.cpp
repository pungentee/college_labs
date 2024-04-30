#include <iostream>
#include <cstring>

int main() {
    char symbol = -1;
    int count = 0;

    std::cout << "Enter symbol (0 to exit): ";
    while (true) {
        if (std::cin.peek() == '\n') {
            std::cout << std::endl<< "Enter symbol (0 to quit): ";
        }
        std::cin >> symbol;
        if (symbol == '0') {
            break;
        }

        if (symbol > ('a' - 1) && symbol < ('z' + 1)) {
            symbol = toupper(symbol);
            count++;
        } else if (symbol > ('A' - 1) && symbol < ('Z' + 1)) {
            symbol = tolower(symbol);
            count++;
        }
        std::cout << symbol;
    }

    std::cout << std::endl << "Number of replacements: " << count << std::endl;

    return 0;
}
