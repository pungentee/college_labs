#include <iostream>
#include <vector>

const int SIZE = 15;

int main() {
    srand(time(nullptr));

    std::vector<int> vec;

    for (int i = 0; i < SIZE; i++) {
        int num = rand() % 21 - 10;
        vec.push_back(num);
    }

    int count = 0;

    for (auto i : vec) {
        std::cout << i << " ";

        count += i < 0 ? 1 : 0;
    }
    std::cout << std::endl;

    std::cout << "Smaller than 0: " << count << std::endl;

    for (size_t i = 0, size = vec.size(); i < size; i++) {
        if (vec[i] < 0) {
            vec.erase(vec.begin() + i);
            size -= 1;
            i -= 1;
        }
    }

    for (auto i : vec) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}
