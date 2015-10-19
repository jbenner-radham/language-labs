#include <iostream>
#include <string>

int main()
{
    std::string str = "Hello, world.";

    std::cout << str << std::endl;

    for (auto &c: str) {
        c = toupper(c);
    }

    std::cout << str << std::endl;

    for (auto &c: str) {
        c = tolower(c);
    }

    std::cout << str << std::endl;
}
