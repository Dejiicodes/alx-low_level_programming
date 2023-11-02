#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * is_digit - Check if a character is a digit.
 * @c: The character to check.
 *
 * Return: 1 if the character is a digit, 0 otherwise.
 */
int is_digit(char c) {
    return c >= '0' && c <= '9';
}

/**
 * str_to_int - Convert a string to an integer.
 * @str: The string to convert.
 *
 * Return: The integer value of the string.
 */
int str_to_int(char *str) {
    int result = 0;
    int i;
    for (i = 0; str[i] != '\0'; i++) {
        result = result * 10 + (str[i] - '0');
    }
    return result;
}

/**
 * print_error - Print an error message and exit with status 98.
 */
void print_error() {
    fprintf(stderr, "Error\n");
    exit(98);
}

int main(int argc, char *argv[]) {
    int len1, len2, i;
    char *num1, *num2;
    int result;

    if (argc != 3) {
        print_error();
    }

    num1 = argv[1];
    num2 = argv[2];

    len1 = strlen(num1);
    len2 = strlen(num2);

    for (i = 0; i < len1; i++) {
        if (!is_digit(num1[i])) {
            print_error();
        }
    }

    for (i = 0; i < len2; i++) {
        if (!is_digit(num2[i])) {
            print_error();
        }
    }

    result = str_to_int(num1) * str_to_int(num2);

    printf("%d\n", result);

    return 0;
}

