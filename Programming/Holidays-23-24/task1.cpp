#include <iostream>

int main() {
    std::srand(std::time(nullptr));

    int n = 0;

    std::cout << "Enter n: ";
    std::cin >> n;
    std::cout << std::endl;

    int A[n];
    int positiveCount = 0, negativeCount = 0;

    for (int i = 0; i < n; i++) {
        int randomNumber = std::rand() % 2001 - 1000;
        A[i] = randomNumber;

        if (randomNumber < 0) {
            negativeCount++;
        } else {
            positiveCount++;
        }
    }

    int B[positiveCount], C[negativeCount];

    int bIndex = 0, cIndex = 0;
    for (int i = 0; i < n; i++) {
        int number = A[i];

        if (number < 0) {
            C[cIndex] = number;
            cIndex++;
        } else {
            B[bIndex] = number;
            bIndex++;
        }
    }

    std::cout << "Positive: " << positiveCount << std::endl;
    for (int i = 0; i < positiveCount; i++) {
        std::cout << B[i] << " ";
    }
    std::cout << std::endl << std::endl;

    std::cout << "Negative: " << negativeCount << std::endl;
    for (int i = 0; i < negativeCount; i++) {
        std::cout << C[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
