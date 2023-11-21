#include <iostream>

void showNumbers(int a, int b)
{
    std::cout << "a = " << a << " b = " << b << std::endl;
}

int main()
{
    int a = 0, b = 0;

    std::cout << "Введіть два числа" << std::endl;
    std::cout << "Перше: ";
    std::cin >> a;
    std::cout << "Друге: ";
    std::cin >> b;

    showNumbers(a, b);

    std::cout << "Вичислення..." << std::endl;
    a = a + b;
    b = a - b;
    a = a - b;

    showNumbers(a, b);

    return 0;
}
