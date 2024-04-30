#include <iostream>
#include <string>

int main() {
    int coins;
    std::string exp;
    std::cout << "Введіть кількість копійок: ";
    std::cin >> coins;

    if (coins % 10 == 1 && coins % 100 != 11) {
        exp = "копійка";
    } else if (coins % 10 >= 2 && coins % 10 <= 4 && (coins % 100 < 10 || coins % 100 >= 20)) {
        exp = "копійки";
    } else {
        exp = "копійок";
    }

    std::cout << coins << " " << exp << std::endl;

    return 0;
}
