#include <stdio.h>

size_t _strlen(const char *s)
{
    size_t len = 0;
    while (s[len] != '\0')
    {
        len++;
    }
    return len;
}

int main(void)
{
    printf("%d\n", (int)_strlen("My Dyn Lib"));
    return 0;
}
