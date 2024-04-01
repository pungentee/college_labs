#include <iostream>

double lenght(const double vertex1[2], const double vertex2[2]) {
    return sqrt(pow(vertex2[0] - vertex1[0], 2) + pow(vertex2[1] - vertex1[1], 2));
}

bool is_exits(const double triangle[3][2]) {
    const double side1 = lenght(triangle[0], triangle[1]);
    const double side2 = lenght(triangle[2], triangle[1]);
    const double side3 = lenght(triangle[0], triangle[2]);

    const bool is_exists = side1 + side2 > side3;

    return is_exists;
}

double perimeter(const double triangle[3][2]) {
    const double side1 = lenght(triangle[0], triangle[1]);
    const double side2 = lenght(triangle[2], triangle[1]);
    const double side3 = lenght(triangle[0], triangle[2]);

    return side1 + side2 + side3;
}

double area(const double triangle[3][2]) {
    const double side1 = lenght(triangle[0], triangle[1]);
    const double side2 = lenght(triangle[2], triangle[1]);
    const double side3 = lenght(triangle[0], triangle[2]);

    const double p = (side1 + side2 + side3) / 2;

    return sqrt(p * (p - side1) * (p - side2) * (p - side3));
}

int main() {
    double triangle[3][2];

    std::cout << "Enter first vertex: ";
    std::cin >> triangle[0][0] >> triangle[0][1];

    std::cout << "Enter second vertex: ";
    std::cin >> triangle[1][0] >> triangle[1][1];

    std::cout << "Enter third vertex: ";
    std::cin >> triangle[2][0] >> triangle[2][1];

    const bool is_triangle_exists = is_exits(triangle);
    std::cout << "Is triabgle exists: " << (is_triangle_exists ? "True" : "False") << std::endl;

    if (is_triangle_exists) {
        std::cout << "Lenghts of sides: " << std::endl;
        std::cout << "First side: " << lenght(triangle[0], triangle[1]) << std::endl;
        std::cout << "Second side: " << lenght(triangle[2], triangle[1]) << std::endl;
        std::cout << "Third side: " << lenght(triangle[0], triangle[2]) << std::endl;

        double (*functions[])(const double[3][2]) = {perimeter, area};

        std::cout << "Perimeter: " << functions[0](triangle) << std::endl;
        std::cout << "Area: " << functions[1](triangle) << std::endl;
    }

    return 0;
}