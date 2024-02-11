#include <iomanip>
#include <iostream>

int main() {
    std::srand(time(0));

    int n = 5, m = 10;
    int arr[n][m];

    // fill array
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            arr[i][j] = rand() % 11;
        }
    }

    int sum = 0;
    for (int j = 0; j < m; j++) {
        int min = 100;  // 100 because it is greater than greatest value that may be generated
        for (int i = 0; i < n; i++) {
            if (arr[i][j] < min) {
                min = arr[i][j];
            }
        }
        sum += min;
    }

    // print original array
    std::cout << "\t\tArray" << std::endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cout << std::setw(3) << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }

    std::cout << "Sum of minimum values of each row: " << sum << std::endl;
}
