#include "main.h"
/**
 * print_integer - function to print an integer to stdout
 * @num: integer to print
 * Return: number of characters printed
 */
int print_integer(int num)
{
int count = 0;
int neg = 0;
if (num < 0)
{
neg = 1;
num = -num;
}
if (num == 0)
{
_putchar('0');
count++;
}
while (num > 0)
{
int digit = num % 10;
_putchar(digit + '0');
count++;
num = num / 10;
}
if (neg)
{
_putchar('-');
count++;
}
return (count);
}
