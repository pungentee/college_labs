#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <string>

int fillArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 10;
    }

    return 0;
}

int reverse(int* arr, int size) {
    int temp = 0;
    for (int i = 0; i < size / 2; i++) {
        temp = arr[size - 1 - i];
        arr[size - 1 - i] = arr[i];
        arr[i] = temp;
    }

    return 0;
}

int printArr(std::string prefix, int* arr, int size) {
    std::cout << prefix;
    for (int i = 0; i < size; i++) {
        std::cout << std::setw(2) << arr[i];
    }
    std::cout << std::endl;

    return 0;
}

int findMaxIndex(int* arr, int size) {
    int max = -32767;  // the smallest possible value of int
    int index = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
            index = i;
        }
    }

    return index;
}

int deleteByIndex(int* arr, int* size, int index) {
    for (int i = index; i < *size; i++) {
        arr[i] = arr[i + 1];
    }
    *size -= 1;

    return 0;
}

bool isContain(int* arr, int size, int value) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == value) {
            return true;
        }
    }
    return false;
}
