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
case 'b':
/*print_binary(args, count);*/
break;
case 'u':
print_unsigned(args, count);
break;
case 'o':
print_octal(args, count);
break;
case 'x':
print_hex_lower(args, count);
break;
case 'X':
print_hex_upper(args, count);
break;
/* handle other conversion specifiers here */
case '%':
print_percent(count);
break;
/* add more cases for other format specifiers here */
case 'S':
print_S(args, count);
break;
default:
print_percent(count);
_putchar(*format);
*count += 1;
break;
}
}
