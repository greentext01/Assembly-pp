#include "reader.hpp"

#include <fstream>
#include <sstream>
#include <string>

void Reader::readFile(std::string filePath) {
    s_filePath = filePath;
    std::ifstream input(filePath);
    std::stringstream output;
    output << input.rdbuf();
    s_result = output.str();
}