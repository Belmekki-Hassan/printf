#include "main.h"

/**
 * handle_format_specifier - handles format specifier for _printf()
 * @args: list of arguments
 * @count: pointer to the count of printed characters
 * @format: current character in format string
 *
 * Return: void
 */
void handle_format_specifier(va_list args, int *count, const char *format)
{
switch (*format)
{
case 'c':
print_char(args, count);
break;
case 's':
print_string(args, count);
break;
case 'd':
case 'i':
print_integer(args, count);
break;
case '%':
print_percent(count);
break;
 /* add more cases for other format specifiers here */
default:
print_percent(count);
_putchar(*format);
*count += 1;
break;
}
}

