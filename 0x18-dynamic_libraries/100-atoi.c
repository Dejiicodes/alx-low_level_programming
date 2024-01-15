#include "main.h"
#include <stdio.h>  // You can include other necessary headers for atoi

/**
* _atoi - Converts a string to an integer.
* @s: The string to convert
*
* Return: The integer value of the string.
*/
int _atoi(char *s)
{
    int result = 0;
    int sign = 1;
    int i = 0;

    // Handle leading white spaces
    while (s[i] == ' ')
    {
        i++;
    }

    // Handle the sign
    if (s[i] == '-')
    {
        sign = -1;
        i++;
    }
    else if (s[i] == '+')
    {
        i++;
    }

    // Convert the string to an integer
    while (s[i] >= '0' && s[i] <= '9')
    {
        result = result * 10 + (s[i] - '0');
        i++;
    }

    return result * sign;
}

