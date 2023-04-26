#include "main.h"
/**
 * print_S - prints a string and converts non-printable chars
 * @args: list of arguments
 * @count: integer counter
 * Return: void
 */
void print_S(va_list args, int *count)
{
char *str = va_arg(args, char*);
int i;
if (str == NULL)
{
str = "(null)";
}
for (i = 0; str[i] != '\0'; i++)
{
if ((str[i] > 0 && str[i] < 32) || (str[i] >= 127))
{
_putchar('\\');
_putchar('x');
if (str[i] < 16)
{
_putchar('0');
}
*count += 2;
*count += _printf("%X", str[i]);
}
else
{
_putchar(str[i]);
*count += 1;
}
}
}
