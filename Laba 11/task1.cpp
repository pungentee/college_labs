#include <chrono>
#include <iostream>

int results[3][2];  // масив у який будуть записуватись результати
const int N[] = {100, 500, 1000};

int main() {
    int k = 0;
    std::cout << "enter k: ";
    std::cin >> k;

    std::cout << std::endl << "less than k and same:" << std::endl;

    for (int i = 0; i < 3; i++) {
        int n = N[i];
        int arr1[n], arr2[n], *ptr;

        // заповнюємо масиви

        for (int j = 0; j < n; j++) {
            int elem = rand() % 99 + 1;
            arr1[j] = elem;
            arr2[j] = elem;
        }

        // використовуючи індексацію
        int count = 0;

        auto start = std::chrono::high_resolution_clock::now();
        for (int j = 0; j < n; j++) {
            if (arr1[j] == arr2[j] && arr1[j] < k) {
                count++;
            }
        }
        auto stop = std::chrono::high_resolution_clock::now();
        results[i][0] = std::chrono::duration_cast<std::chrono::microseconds>(stop - start).count();

        std::cout << n << " (indexes): " << count << std::endl;

        // використовуючи вказівники
        count = 0;

        start = std::chrono::high_resolution_clock::now();
        for (int j = 0; j < n; j++) {
            if (*(arr1 + j) == *(arr2 + j) && *(arr1 + j) < k) {
                count++;
            }
        }
        stop = std::chrono::high_resolution_clock::now();
        results[i][1] = std::chrono::duration_cast<std::chrono::microseconds>(stop - start).count();

        std::cout << n << " (pointers): " << count << std::endl;

        std::cout << std::endl;
    }

    // виводимо результати замірів
    std::cout << "\t\t Results" << std::endl;
    std::cout << "n: \t\t" << N[0] << "\t" << N[1] << "\t" << N[2] << "\t" << std::endl;
    for (int i = 0; i < 2; i++) {
        if (i == 0) {
            std::cout << "indexes:\t";
        } else {
            std::cout << "pointers:\t";
        }
        for (int j = 0; j < 3; j++) {
            std::cout << results[i][j] << "ms\t";
        }
        std::cout << std::endl;
    }
}
