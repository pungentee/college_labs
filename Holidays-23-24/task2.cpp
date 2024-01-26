#include <iostream>

int main() {
    std::srand(std::time(nullptr));

    int n = 15, A = 0, count = 0;
    int arr[n];

    for (int i = 0; i < n; i++) {
        arr[i] = std::rand() % 2001 - 1000;
    }

    std::cout << "Array: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Enter A: ";
    std::cin >> A;
    std::cout << std::endl;

    for (int i = 0; i < n; i++) {
        if (arr[i] > A) {
            count++;
        }
    }

    std::cout << count << std::endl;

    return 0;
}
