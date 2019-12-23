#include <iostream>
#include <stddef.h>



int main()
{
    std::cout << "|     Category    |     Type    |      Size |" << std::endl;
    std::cout << "|-----------------|-------------|-----------|" << std::endl;
    std::cout << "| boolean         | bool        | " << sizeof(bool) << " byte    |" << std::endl;
    std::cout << "| character       | char        | " << sizeof(char) << " byte    |" << std::endl;
    std::cout << "|                 | wchar_t     | " << sizeof(wchar_t) << " bytes   |" << std::endl;
    std::cout << "|                 | char16_t    | " << sizeof(char16_t) << " bytes   |" << std::endl;
    std::cout << "|                 | char32_t    | " << sizeof(char32_t) << " bytes   |" << std::endl;
    std::cout << "| integer         | short       | " << sizeof(short) << " bytes   |" << std::endl;
    std::cout << "|                 | int         | " << sizeof(int) << " bytes   |" << std::endl;
    std::cout << "|                 | long        | " << sizeof(long) << " bytes   |" << std::endl;
    std::cout << "|                 | long long   | " << sizeof(long long) << " bytes   |" << std::endl;
    std::cout << "| floating point  | float       | " << sizeof(float) << " bytes   |" << std::endl;
    std::cout << "|                 | double      | " << sizeof(double) << " bytes   |" << std::endl;
    std::cout << "|                 | long double | " << sizeof(long double) << " bytes   |" << std::endl;

}
