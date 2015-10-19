#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str = "Hello, world.";

    cout << str << endl;

    for (string::iterator i = str.begin(); i != str.end(); ++i) {
        *i = toupper(*i);
    }

    cout << str << endl;
    //std::cout << str << std::endl;
    //std::cout << "Hello, world." << std::endl;
}
