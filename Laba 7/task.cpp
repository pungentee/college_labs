#include <iostream>
#include <vector>

// get amount of digits of number
int getAmountOfDigits(int number) {
    int result = 0;
    while (number != 0) {
        number /= 10;
        result++;
    }
    return result;
}

// get array of digits of number
std::vector<int> getArrayOfDigits(int number) {
    std::vector<int> arrayOfDigits;
    int length = getAmountOfDigits(number);

    for (int i = 0; i < length; i++) {
        arrayOfDigits.insert(arrayOfDigits.begin(), number % 10);
        number /= 10;
    }

    return arrayOfDigits;
}

// search for how many digits match
int howManyDigitsMatch(std::vector<int> first, std::vector<int> second) {
    int result = 0;
    std::vector<int> firstArr = std::vector<int>(first);
    std::vector<int> secondArr = std::vector<int>(second);

    for (int i = 0; i < firstArr.size(); i++) {
        for (int j = 0; j < secondArr.size(); j++) {
            if (firstArr.at(i) == secondArr.at(j)) {
                // if the numbers are the same, we delete them so that they are not used in the future
                secondArr.erase(secondArr.begin() + j);
                result++;
                break;
            }
        }
    }

    return result;
}

int main() {
    srand(time(0));

    int randomNumber = std::rand() % 1000;
    std::cout << "**Generated number: " << randomNumber << "** // it will be deleted" << std::endl << std::endl;  // TODO: deleted it

    int userNumber = 0;
    bool isWin = false;
    int numberLength = getAmountOfDigits(randomNumber);

    std::vector<int> randomDigitsArray = getArrayOfDigits(randomNumber);  // generating array with digits of random generated number
    std::vector<int> userDigitsArray;

    std::cout << "Guess the " << numberLength << "-digit number" << std::endl << std::endl;

    while (!isWin) {
        int guessed = 0;          // counting digits that contains in random number
        int matchedPosition = 0;  // counting digits that have same position

        std::cout << "Enter your option: ";
        std::cin >> userNumber;

        if (getAmountOfDigits(userNumber) != numberLength) {
            std::cout << "Invalid input" << std::endl;
            continue;
        }

        userDigitsArray = getArrayOfDigits(userNumber);

        for (int i = 0; i < numberLength; i++) {
            // checking for user's digits contains in random number
            guessed = howManyDigitsMatch(randomDigitsArray, userDigitsArray);

            // checking for how much digits have same position
            if (randomDigitsArray.at(i) == userDigitsArray.at(i)) {
                matchedPosition++;
            }
            if (randomDigitsArray.at(i) != userDigitsArray.at(i)) {
                isWin = false;
                break;
            }
        }

        std::cout << "Guessed: " << guessed << "\tMatched position: " << matchedPosition << std::endl;

        // check for win
        for (int i = 0; i < numberLength; i++) {
            isWin = true;
            if (randomDigitsArray.at(i) != userDigitsArray.at(i)) {
                isWin = false;
                break;
            }
        }
    }

    std::cout << std::endl << "You guessed the number " << randomNumber << std::endl;
}
