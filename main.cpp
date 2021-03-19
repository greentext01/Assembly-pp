#include <iostream>
#include <string>
#include <vector>

#include "src/finder.hpp"
#include "src/reader.hpp"

int main() {
    std::string program = readFile("syntax");
    Finder m_finder(program);
    std::vector<int> words = m_finder.findTokens("mov");

    for (int pos : words) {
        std::cout << pos << std::endl;
    }
    return 0;
}
