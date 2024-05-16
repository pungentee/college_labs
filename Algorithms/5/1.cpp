// Copyright 2024 <pungentee>

#include <iostream>
#include <vector>

int binary_search(const std::vector<int> &vec, const int &key) {
    int begin = 0, end = vec.size(), i;
    bool is_found = false;
    while ((begin < end) && !is_found) {
        i = (begin + end) / 2;
        if (vec[i] == key)
            is_found = true;
        else if (vec[i] < key)
            begin = i + 1;
        else
            end = i - 1;
    }
    if (is_found == false) i = -1;
    return i;
}

bool is_repeated(std::vector<int> vec, int key, int times) {
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

std::vector<int> repeated_in_both(std::vector<int> vec1, std::vector<int> vec2) {
    std::vector<int> checked;
    std::vector<int> result;

    for (int i : vec1) {
        if (binary_search(checked, i) != -1) {
            continue;
        }
        if (is_repeated(vec1, i, 2) && is_repeated(vec2, i, 2)) {
            result.push_back(i);
        }

        checked.push_back(i);
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

    std::sort(vec1.begin(), vec1.end());
    std::sort(vec2.begin(), vec2.end());

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

    const std::vector<int> repeated = repeated_in_both(vec1, vec2);

    std::cout << "Repeated: ";
    for (const int i : repeated) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}
