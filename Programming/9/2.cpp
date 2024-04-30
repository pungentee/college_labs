#include <ctime>
#include <iostream>

#include "utils.hpp"

int main() {
    srand(time(nullptr));

    int size_a = 0, size_b = 0;
    int max_a, max_a_index = 0;

    std::cout << "Enter first array size: ";
    std::cin >> size_a;

    std::cout << "Enter second array size: ";
    std::cin >> size_b;

    std::cout << std::endl;

    int* arr_a = new int[size_a];
    int* arr_b = new int[size_b];

    fillArray(arr_a, size_a);
    fillArray(arr_b, size_b);

    printArr("Array A:\t", arr_a, size_a);
    printArr("Array B:\t", arr_b, size_b);

    std::cout << std::endl;

    while (size_a > 0) {
        max_a_index = findMaxIndex(arr_a, size_a);
        max_a = arr_a[max_a_index];

        if (!isContain(arr_b, size_b, max_a)) {
            std::cout << "This value is " << max_a << std::endl;

            delete[] arr_a;
            delete[] arr_b;

            return 0;
        } else {
            deleteByIndex(arr_a, &size_a, max_a_index);
        }
    }

    std::cout << "There aren't so values" << std::endl;

    delete[] arr_a;
    delete[] arr_b;

    return 0;
}
