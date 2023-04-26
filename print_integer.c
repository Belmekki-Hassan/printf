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
if (num < 0)
{
_putchar('-');
num = -num;
*count += 1;
}
if (num == 0)
{
_putchar('0');
*count++;
}
while (num / divisor > 0)
divisor *= 10;
while (divisor != 0)
{
num %= divisor;
divisor /= 10;
_putchar(num / divisor + '0');
*count += 1;
}
}
