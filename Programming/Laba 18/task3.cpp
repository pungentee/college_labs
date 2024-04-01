#include <iostream>
#include <vector>

std::vector<std::string> split(const std::string& s, char delimiter) {
    std::vector<std::string> tokens;
    std::string token;
    size_t start = 0, end = 0;

    while ((end = s.find(delimiter, start)) != std::string::npos) {
        token = s.substr(start, end - start);
        tokens.push_back(token);
        start = end + 1;
    }

    token = s.substr(start);
    tokens.push_back(token);

    return tokens;
}

int main() {
    std::string text;

    std::cout << "Enter a string: ";
    std::getline(std::cin, text);

    std::string first_word = text.substr(0, text.find(' '));

    std::vector<std::string> words = split(text, ' ');

    int count = -1;
    for (const std::string& word : words) {
        if (word == first_word) {
            count++;
        }
    }

    std::cout << "Count: " << count << std::endl;

    std::cout << std::endl;
}
