#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    const char *str = "Hello, world.";
    size_t len = strlen(str);
    size_t size = len + 1;
    char upper[size];
    char lower[size];

    for (size_t i = 0; i < len; ++i) {
        char c = str[i];
        upper[i] = toupper(c);
        lower[i] = tolower(c);
    }

    upper[len] = '\0';
    lower[len] = '\0';

    printf("%s\n", str);
    printf("%s\n", upper);
    printf("%s\n", lower);
}
