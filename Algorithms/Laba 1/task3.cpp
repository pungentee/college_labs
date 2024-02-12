#include <iostream>

int main() {
    int n = 0, m = 0;

    std::cout << "Enter size of matrix (n * m): ";
    std::cin >> n >> m;

    char arr[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            arr[i][j] = rand() % 26 + 65;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
