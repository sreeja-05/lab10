#include <iostream>
#include <fstream>
#include <string>
#include "utils.h"

int main() {
    std::string filename;
    std::cout << "Enter the filename: ";
    std::cin >> filename;

    std::ifstream infile(filename);
    if (!infile) {
        std::cerr << "Error: Cannot open file " << filename << "\n";
        return 1;
    }

    std::string line;
    while (std::getline(infile, line)) {
        std::string num = trim(line);
        std::cout << "Input: " << num << "\n";

        if (isValidDouble(num)) {
            std::string result = addStrings(num, "-123.456");
            std::cout << "Result of addition with -123.456: " << result << "\n\n";
        } else {
            std::cout << "Invalid number\n\n";
        }
    }

    infile.close();
    return 0;
}
