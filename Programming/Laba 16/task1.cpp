#include <iostream>
#include <vector>
#include <string>
#include <map>

std::vector<std::string> split(const std::string& str, const char delimiter) {
    std::vector<std::string> sub_strs;
    int last_delimiter = -1;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == delimiter || i == str.length() - 1) {
            int sub_str_begin = last_delimiter + 1;
            int sub_str_end = (i == str.length() - 1) ? i - last_delimiter
                                                      : i - last_delimiter - 1;
            std::string sub_str = str.substr(sub_str_begin, sub_str_end);
            sub_strs.push_back(sub_str);
            last_delimiter = i;
        }
    }

    return sub_strs;
}

void fill(std::string& str, std::map<std::string, std::string>& keys) {
    int first_bracket = -1, second_bracket = -1;

    for (size_t i = 0, len = str.length(); i < len; i++) {
        if (str[i] == '[') {
            first_bracket = i;
        }
        if (str[i] == ']') {
            second_bracket = i;

            int key_length = second_bracket - first_bracket - 1;
            std::string key = str.substr(first_bracket + 1, key_length);
            std::string value = keys[key];

            if (!value.empty()) {
                str.replace(first_bracket, key_length + 2, value);

                int colision = value.length() - (key_length + 2);
                len += colision;
                i += colision;
            }
        }
    }
}

int main(void) {
    std::string values;
    std::getline(std::cin, values);

    std::vector<std::string> values_splited = split(values, ',');

    std::map<std::string, std::string> values_map;
    for (const std::string& pair_str : values_splited) {
        std::vector<std::string> pair = split(pair_str, '=');
        values_map[pair[0]] = pair[1];
    }

    std::string text_template;
    std::getline(std::cin, text_template);

    fill(text_template, values_map);

    std::cout << text_template << std::endl;

    return 0;
}