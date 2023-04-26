#include "main.h"
/**
 * print_unsigned_integer - function to print an unsigned integer to stdout
 * @args: list of arguments
 * @count: integer counter
 * @base: the base of the number (8, 10, or 16)
 * @is_uppercase: boolean value indicating whether to print hex in uppercase
 * Return: null
 */
void print_unsigned_integer(va_list args, int *count, int base, int is_uppercase)
{
unsigned int num = va_arg(args, unsigned int);
char *digits = "0123456789abcdef";
if (is_uppercase)
digits = "0123456789ABCDEF";
char buffer[1024];
int i = 0;
if (num == 0)
{
_putchar('0');
*count += 1;
return;
}
while (num != 0)
{
buffer[i++] = digits[num % base];
num /= base;
}
for (int j = i - 1; j >= 0; j--)
{
_putchar(buffer[j]);
*count += 1;
}
}
/**
 * print_u - function to handle the 'u' conversion specifier
 * @args: list of arguments
 * @count: integer counter
 * Return: null
 */
void print_u(va_list args, int *count)
{
print_unsigned_integer(args, count, 10, 0);
}
/**
 * print_o - function to handle the 'o' conversion specifier
 * @args: list of arguments
 * @count: integer counter
 * Return: null
 */
void print_o(va_list args, int *count)
{
print_unsigned_integer(args, count, 8, 0);
}
/**
 * print_x - function to handle the 'x' conversion specifier
 * @args: list of arguments
 * @count: integer counter
 * Return: null
 */
void print_x(va_list args, int *count)
{
print_unsigned_integer(args, count, 16, 0);
}
/**
 * print_X - function to handle the 'X' conversion specifier
 * @args: list of arguments
 * @count: integer counter
 * Return: null
 */
void print_X(va_list args, int *count)
{
print_unsigned_integer(args, count, 16, 1);
}
