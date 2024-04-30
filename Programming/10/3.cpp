#include <iomanip>
#include <iostream>

int main() {
    std::srand(time(0));
    int n = 5;

    int arr[n][n];

    // fill array
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            arr[i][j] = rand() % 11;
        }
    }

    // print original array
    std::cout << "    Original array" << std::endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cout << std::setw(3) << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }

    // modify array
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                arr[i][j] = 0;
            }
        }
    }

    // print modified array
    std::cout << "    Modified array" << std::endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cout << std::setw(3) << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}
