#include <iostream>
#include <math.h>
#define x 1.52
#define c 5

int main()
{
    float y, a, b;
    b = sqrt(x);
    a = cbrt(fabs(b + c));
    y = a * pow(sin(b), 2) + b * pow(cos(a), 2);

    std::cout << y << std::endl;

    return 0;
}
