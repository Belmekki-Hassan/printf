#include "main.h"
/**
*_printf - A printf clone
*@format: const pointer to a char - % include formats
*Return: number of characters printed.
*/
int _printf(const char *format, ...)
{
int count = 0;
va_list args;
va_start(args, format);
if (!format || (format[0] == '%' && !format[1]))
return (-1);
if (format[0] == '%' && format[1] == ' ' && !format[2])
return (-1);
while (*format)
{
if (*format == '%')
{
format++;
if (*format)
{
handle_format_specifier(args, &count, format);
format++;
}
else
{
_putchar(*format);
format++;
count++;
}
}
va_end(args);
return (count);
}
}
