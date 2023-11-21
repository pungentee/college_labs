#include <iostream>
#define cmInInch 2.54

int main()
{
    int inch = 0;
    std::cout << "Введіть довжину у дюймах: ";
    std::cin >> inch;
    std::cout << inch << " дюймів = " << inch * cmInInch << " см\n"
              << inch << " дюймів = " << inch * cmInInch * 10 << " мм\n"
              << inch << " дюймів = " << inch * cmInInch / 100 << " м\n";

    return 0;
}
