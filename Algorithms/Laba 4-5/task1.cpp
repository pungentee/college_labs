// Copyright 2024 <pungentee>

#include <iostream>
#include <vector>

int linearSearch(std::vector<int> vec, int key) {
    for (size_t i = 0; i < vec.size(); i++) {
        if (vec[i] == key) return i;
    }
    return -1;
}

bool isRepeated(std::vector<int> vec, int key, int times) {
    int timesFound = 0;
    for (int i : vec) {
        if (i == key) {
            timesFound += 1;
            if (timesFound == times) {
                return true;
            }
        }
    }
    return false;
}

std::vector<int> repeatedInBoth(std::vector<int> vec1, std::vector<int> vec2) {
    std::vector<int> checked;
    std::vector<int> result;

    for (size_t i = 0; i < vec1.size(); i++) {
        if (linearSearch(checked, vec1[i]) != -1) {
            continue;
        }
        if (isRepeated(vec1, vec1[i], 2) && isRepeated(vec2, vec1[i], 2)) {
            result.push_back(vec1[i]);
        }

        checked.push_back(vec1[i]);
    }
    return result;
}

int main() {
    srand(time(nullptr));

    const int N = 15;

    std::vector<int> vec1, vec2;

    for (int i = 0; i < N; i++) {
        vec1.push_back(rand() % 11);
        vec2.push_back(rand() % 11);
    }

    std::cout << "First: ";
    for (const int i : vec1) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    std::cout << "Second: ";
    for (const int i : vec2) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    const std::vector<int> repeated = repeatedInBoth(vec1, vec2);

    std::cout << "Repeated: ";
    for (const int i : repeated) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}
