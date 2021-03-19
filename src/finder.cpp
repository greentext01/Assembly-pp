#include "finder.hpp"

#include <cstring>
#include <sstream>
#include <string>
#include <vector>

std::vector<int> Finder::findTokens(std::string token) {
    std::vector<int> output = {};

    size_t foundToken;

    /**
     * @brief The position of the previously found token
     */
    size_t prevFoundToken = 0;

    while ((foundToken = s_result.find(token, prevFoundToken)) !=
           std::string::npos) {
        output.push_back(foundToken);

        // +1 because if ypu don't, it will keep finding the same token.
        prevFoundToken = foundToken + 1;
    }
    return output;
}