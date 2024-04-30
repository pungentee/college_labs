#include <iomanip>
#include <iostream>

int main() {
    std::srand(time(0));

    int n = 5, m = 10;
    int arr[n][m];

    // fill array
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            arr[i][j] = rand() % 21 - 10;
        }
    }

    // print original array
    std::cout << "\t      Original array" << std::endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cout << std::setw(3) << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }

    // modify array
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            arr[i][j] = -arr[i][j];
        }
    }

    // print modified array
    std::cout << "\t      Modified array" << std::endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cout << std::setw(3) << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}
