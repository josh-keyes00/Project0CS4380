#include <iostream>
#include <string>
#include <cstdlib>
#include <cctype>
#include "myUtils.h"

bool isValidInput(const std::string& input) {
    if (input.empty()) return false;
    for (char ch : input) {
        if (!isdigit(ch)) return false;
    }

    try {
        size_t idx;
        unsigned long long val = std::stoull(input, &idx);
        return idx == input.size() && val <= 4294967295ULL;
    } catch (...) {
        return false;
    }
}

int main() {
    std::string input;
    std::cout << "Enter a non-negative base 10 integer between 0 and 4294967295 (with no commas) and hit Enter/Return: ";
    std::getline(std::cin, input);

    if (!isValidInput(input)) {
        std::cout << "Invalid input!" << std::endl;
        return 1;
    }

    unsigned int number = static_cast<unsigned int>(std::stoul(input));
    std::string binary = convTen2Two(number);

    std::cout << binary << std::endl;
    return 0;
}
