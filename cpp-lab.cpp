#include <iostream>
#include <string>

int main()
{
    std::string str = "Hello, world.";
    std::string upper = str;
    std::string lower = str;

    for (auto &c: upper) {
        c = toupper(c);
    }

    for (auto &c: lower) {
        c = tolower(c);
    }

    std::cout << str << std::endl;
    std::cout << upper << std::endl;
    std::cout << lower << std::endl;
}
