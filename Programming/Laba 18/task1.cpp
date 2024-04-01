#include <iostream>

bool is_even(int n) { return n % 2 == 0; }

int main() {
    std::string str;

    std::cout << "Enter a string: ";
    std::getline(std::cin, str);

    int even = 0, contain_K = 0;
    for (int i = 0; i < str.length();) {
        const int word_start = i;
        const int find_word_end = str.find(' ', i);
        const int word_end = find_word_end != -1 ? find_word_end : str.length();
        int word_length = word_end - word_start;

        even += is_even(word_length);
        contain_K += str.substr(word_start, word_length).find('k') != -1 ? 1 : 0;
        i = word_end + 1;
    }

    std::cout << "evens: " << even << std::endl;
    std::cout << "contains k: " << contain_K << std::endl;
    if (even > contain_K) {
        std::cout << "is the number of words with an even l›ength greater than those containing k"
                  << std::endl;
    } else if (even == contain_K) {
        std::cout << "is the number of words with an even length equal to those containing k"
                  << std::endl;
    } else {
        std::cout << "is the number of words with an even length less than those containing k"
                  << std::endl;
    }
}