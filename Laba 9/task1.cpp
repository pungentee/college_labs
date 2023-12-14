#include <cstdlib>
#include <ctime>
#include <iostream>

#include "utils.hpp"

int main() {
    srand(time(nullptr));

    int size = 0;
    std::cout << "Enter array's size: ";
    std::cin >> size;

    int* arr = new int[size];

    fillArray(arr, size);

    printArr("Start array:\t", arr, size);

    reverse(arr, size);

    printArr("Reversed array:\t", arr, size);

    delete[] arr;
    return 0;
}
