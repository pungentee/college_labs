#include <iostream>
#include <math.h>
#define k 1.8

int main()
{
    float p, q;
    std::cout << "p=";
    std::cin >> p;

    q = sqrt(k + 2.6 * p * sin(k)) / (k - pow(p, 3));

    std::cout << q << std::endl;

    return 0;
}
