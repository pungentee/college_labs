#include <iostream>

int main() {
    char city;
    std::cout << "Input first letter of city's name (K, C, L, O, Z):" << std::endl;
    std::cin >> city;

    if (city == 'K' || city == 'k') {
        std::cout << "Kyiv's area: 839 km2, population: 2,9 mln" << std::endl;
    } else if (city == 'C' || city == 'c') {
        std::cout << "Chernivtsi's area: 153 km2, population: 264 k" << std::endl;
    } else if (city == 'L' || city == 'l') {
        std::cout << "Lviv's area: 149 km2, population: 721 k" << std::endl;
    } else if (city == 'O' || city == 'o') {
        std::cout << "Odesa's area: 162,4 km2, population: 993 k" << std::endl;
    } else if (city == 'Z' || city == 'z') {
        std::cout << "Zaporizhia's area: 334 km2, population: 746 k" << std::endl;
    } else {
        std::cout << "Unknown city" << std::endl;
    }

    return 0;
}
