#ifndef EFB9C223_2888_4518_BBBF_380C214A2D13
#define EFB9C223_2888_4518_BBBF_380C214A2D13

#include <string>

class Reader {
   protected:
    std::string s_filePath;
    std::string s_result;

   public:
    void readFile(std::string filePath);
};

#endif /* EFB9C223_2888_4518_BBBF_380C214A2D13 */