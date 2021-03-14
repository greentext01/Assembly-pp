#include <fstream>
#include <sstream>
#include <string>

std::string readFile(std::string filePath) {
    std::ifstream input(filePath);
    std::stringstream buffer;
    buffer << input.rdbuf();
    return buffer.str();
}

