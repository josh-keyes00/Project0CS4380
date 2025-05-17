#include "myUtils.h"

std::string convTen2Two(unsigned int value) {
    if (value == 0) return "0";
    std::string result;
    while (value > 0) {
        result = std::to_string(value % 2) + result;
        value /= 2;
    }
    return result;
}
