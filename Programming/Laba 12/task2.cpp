#include <cmath>
#include <iostream>

int main() {
    srand(time(NULL));

    int n = 10;
    std::cout << "Enter n: ";
    std::cin >> n;

    int *arr = new int[n];

    for (int i = 0; i < n; i += 1) {
        arr[i] = rand() % 41 - 20;
    }

    int countAbsElems = 0;
    for (int i = 0; i < n; i += 1) {
        if (abs(arr[i]) < 10) {
            countAbsElems += 1;
        }
    }

    int *arrAbs = new int[countAbsElems];
    int indexAbsArr = 0;
    for (int i = 0; i < n; i += 1) {
        int elem = arr[i];
        if (abs(elem) < 10) {
            arrAbs[indexAbsArr] = elem;
            indexAbsArr += 1;
        }
    }

    int sum = 0;
    for (int i = 0; i < countAbsElems; i += 1) {
        sum += arrAbs[i];
    }

    float average = (float) sum / countAbsElems;

    std::cout << "Arr: ";
    for (int i = 0; i < n; i += 1) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "ArrAbs: ";
    for (int i = 0; i < countAbsElems; i += 1) {
        std::cout << arrAbs[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Average: " << average << std::endl;
}
