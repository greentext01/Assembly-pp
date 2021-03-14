#include "finder.hpp"
#include <string>
#include <vector>
#include <cstring>
#include <sstream>

Finder::Finder(std::string fileContents) {
    m_fileContents = fileContents;
    std::stringstream ss;
    std::string word;
    ss.str(m_fileContents);
    while(getline(ss, word, ' ')) {
        m_fileWords.push_back(word);
    }
}

std::vector<int> Finder::findWords(std::string word) {
    std::vector<int> output;
    for(std::string item : m_fileWords) {
        if(item == word) output.push_back(item);
    }
}