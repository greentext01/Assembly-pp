#ifndef AF941B71_189B_4E39_8F1F_7B1CBC8EB064
#define AF941B71_189B_4E39_8F1F_7B1CBC8EB064

#include <string>
#include <vector>

#include "reader.hpp"

class Finder : public Reader {
   private:
    std::vector<std::string> m_fileTokens;

   public:
    std::vector<int> findTokens(std::string token);
};

#endif /* AF941B71_189B_4E39_8F1F_7B1CBC8EB064 */