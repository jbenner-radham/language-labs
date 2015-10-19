#include <iostream>
#include <string>

int main()
{
    std::string str = "Hello, world.";
    std::string upper = str;
    std::string lower = str;

    for (auto i = 0; i < str.length(); ++i) {
        char c = str[i];
        upper[i] = toupper(c);
        lower[i] = tolower(c);
    }

    std::cout << str << std::endl;
    std::cout << upper << std::endl;
    std::cout << lower << std::endl;
}
