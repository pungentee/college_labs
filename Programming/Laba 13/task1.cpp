#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    srand(time(NULL));

    int n = 0, m = 0;
    cout << "Enter matrix size (n * m): ";
    cin >> n >> m;

    int **arr = new int *[n];

    for (int i = 0; i < m; i++) {
        arr[i] = new int[m];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            arr[i][j] = rand() % 7 - 3;
        }
    }

    cout << "Array:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << setw(4) << arr[i][j];
        }
        cout << endl;
    }

    int countZerosRows = n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] == 0) {
                countZerosRows--;
                break;
            }
        }
    }

    int **arr2 = new int *[countZerosRows];

    for (int i = 0; i < countZerosRows; i++) {
        arr2[i] = new int[m];
    }

    int index = 0;
    for (int i = 0; i < n; i++) {
        bool hasZero = false;
        for (int j = 0; j < m; j++) {
            if (arr[i][j] == 0) {
                hasZero = true;
            }
        }
        if (!hasZero) {
            for (int j = 0; j < n; j++) {
                arr2[index][j] = arr[i][j];
            }
            index++;
        }
    }

    cout << "New array:\n";
    for (int i = 0; i < countZerosRows; i++) {
        for (int j = 0; j < m; j++) {
            cout << setw(4) << arr2[i][j];
        }
        cout << endl;
    }

    for (int i = 0; i < m; i++) {
        delete[] arr[i];
    }
    for (int i = 0; i < countZerosRows; i++) {
        delete[] arr2[i];
    }
    delete[] arr;
    delete[] arr2;

    return 0;
}
