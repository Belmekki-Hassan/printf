#include "main.h"
/**
 * print_integer - function to print an integer to stdout
 * @args: list of arguments
 * @count: integer counter
 * Return: null
 */
void print_integer(va_list args, int *count)
{
int num = va_arg(args, int);
    int divisor = 1;
    int skip_zero = 1;

    if (num < 0)
    {
        _putchar('-');
        num = -num;
        *count += 1;
    }

    if (num == 0)
    {
        _putchar('0');
        *count += 1;
        return;
    }

    while (num / divisor > 0)
        divisor *= 10;

    while (divisor != 0)
    {
        int digit = num / divisor;
        num %= divisor;
        divisor /= 10;

        if (digit == 0 && skip_zero)
            continue;

        skip_zero = 0;
        _putchar(digit + '0');
        *count += 1;
    }

}
