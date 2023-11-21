#include <iostream>

int main() {
    char city;
    std::cout << "Input first letter of city's name (K, C, L, O, Z):" << std::endl;
    std::cin >> city;

    switch (city) {
        case 'K':
            std::cout << "Kyiv's area: 839 km2, population: 2,9 mln" << std::endl;
            break;
        case 'C':
            std::cout << "Chernivtsi's area: 153 km2, population: 264 k" << std::endl;
            break;
        case 'L':
            std::cout << "Lviv's area: 149 km2, population: 721 k" << std::endl;
            break;
        case 'O':
            std::cout << "Odesa's area: 162,4 km2, population: 993 k" << std::endl;
            break;
        case 'Z':
            std::cout << "Zaporizhia's area: 334 km2, population: 746 k" << std::endl;
            break;
        default:
            std::cout << "Unknown city" << std::endl;
            break;
    }
    return 0;
}
