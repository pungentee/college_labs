#include <iostream>

int main() {
    srand(time(NULL));

    int n = 10;
    int arr[n];

    for (int i = 0; i < n; i += 1) {
        arr[i] = rand() % 10 + 1;
    }

    int countEven = 0, countUneven = 0;

    for (int i = 0; i < n; i += 1) {
        if (arr[i] % 2 == 0) {
            countEven += 1;
            continue;
        }
        countUneven += 1;
    }

    int *arrEven = new int[countEven], *arrUneven = new int[countUneven];
    int indexEven = 0, indexUneven = 0;
    for (int i = 0; i < n; i += 1) {
        int elem = arr[i];
        if (elem % 2 == 0) {
            arrEven[indexEven] = elem;
            indexEven += 1;
            continue;
        }
        arrUneven[indexUneven] = elem;
        indexUneven += 1;
    }

    std::cout << "Arr: ";
    for (int i = 0; i < n; i+= 1){
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "ArrEven: ";
    for (int i = 0; i < countEven; i+= 1) {
        std::cout << arrEven[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "ArrUneven: ";
    for (int i = 0; i < countUneven; i+= 1) {
        std::cout << arrUneven[i] << " ";
    }
    std::cout << std::endl;
}
