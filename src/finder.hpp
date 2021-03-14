#include <string>
#include <vector>

class Finder {
   private:
    std::string m_fileContents;
    std::vector<std::string> m_fileWords;

   public:
    Finder(std::string fileContents);
    std::vector<int> findWords(std::string word);
};