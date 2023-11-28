#include <iomanip>
#include <iostream>

int main() {
    int num = 10;

    for (int i = 0; i <= num; i++) {  // prints lines from 0 to 10
        if (i == 0) {
            for (int j = 1; j <= num; j++) {
                int width = j == 1 ? 10 : 4;
                std::cout << std::setw(width) << j;
            }
            std::cout << std::endl << std::endl;
        } else {
            std::cout << std::setw(4) << i;
            for (int j = 1; j <= num; j++) {
                int width = j == 1 ? 6 : 4;
                std::cout << std::setw(width) << i * j;
            }
            std::cout << std::endl;
        }
    }
}
