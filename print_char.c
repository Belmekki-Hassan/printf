#include "main.h"

/**
 * print_char - Prints a character
 * @args: List of arguments
 * @count: Pointer to the count of printed characters
 * Return: void
 */
void print_char(va_list args, int *count)
{
    char c = va_arg(args, int);
    *count += _putchar(c);
}
