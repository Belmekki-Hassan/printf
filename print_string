#include "main.h"

/**
 * print_string - Prints a string
 * @args: List of arguments
 * @count: Pointer to the count of printed characters
 * Return: void
 */
void print_string(va_list args, int *count)
{
    char *str = va_arg(args, char *);
    int i;

    if (!str)
        str = "(null)";

    for (i = 0; str[i] != '\0'; i++)
    {
        _putchar(str[i]);
        *count += 1;
    }
}
