#include <iostream>

int main() {
    std::string str;

    std::cout << "Enter a string: ";
    std::getline(std::cin, str);

    for (int i = 0; i < str.length();) {
        const int word_start = i;
        const int find_word_end = str.find(' ', i);
        const int word_end = find_word_end != -1 ? find_word_end : str.length();
        int word_length = word_end - word_start;

        std::string word = str.substr(word_start, word_length);
        std::cout << (word.substr(1).find(word[0]) != -1 ? word + " " : "");

        i = word_end + 1;
    }

    std::cout << std::endl;
}
