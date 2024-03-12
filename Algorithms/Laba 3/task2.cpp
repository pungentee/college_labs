#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec;
    int size;

    std::cout << "Enter n: ";
    std::cin >> size;

    for (int i = 0; i < size; i++) {
        int number;
        std::cout << "Enter a number: ";
        std::cin >> number;

        vec.push_back(number);
    }

    for (auto iter = vec.end(); iter > vec.begin(); iter--) {
        std::cout << *(iter - 1) << " ";
    }
    std::cout << std::endl;
}
