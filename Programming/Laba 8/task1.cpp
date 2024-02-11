#include <iomanip>
#include <iostream>
#include <vector>

// calculate arithmetic mean
double arithmeticMeanOfVector(const std::vector<int> vec) {
    double sum = 0, arithmeticMean = 0;

    for (auto i : vec) {
        sum += i;
    }

    return sum / vec.size();
}

int main() {
    srand(time(0));

    for (int i = 0; i < 3; i++) {
        std::vector<int> randomNumbers;

        // fill the vector with random numbers
        for (int j = 0; j < 10; j++) {
            randomNumbers.push_back(rand() % 10 + 1);
        }

        std::cout << "Random numbers: ";
        for (auto j : randomNumbers) {
            std::cout << std::setw(3) << j;
        }
        std::cout << std::endl;

        std::cout << "Arithmetic mean: " << arithmeticMeanOfVector(randomNumbers) << std::endl;
    }

    return 0;
}
