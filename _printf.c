#include <stdarg.h>
#include "main.h"
#include "_putchar.c"
#include "string.c"

/**
 * _printf - A printf clone
 * @format: const pointer to a char - % include formats
 * Return: number of characters printed.
*/

int _printf(const char *format, ...)
{
    int count = 0;

    va_list args;
    va_start(args, format);

    if (!format || !format[0])
        return (-1);
    while (*format)
    {
        if (*format == '%')
        {
            format++;
            if (*format == 'c') 
            {
                char c = va_arg(args, int);
                count += _putchar(c);
                
            }
            else if (*format == 's')
            {
                char *str = va_arg(args, char *);
                count += string(str);
            }
            else if (*format == '%')
            {
                _putchar('%');
                count++;
            }
            else 
            {
                _putchar('%');
                count++;
                if (*format)
                {
                  _putchar(*format);   
                  count++;
                }
            }
            format++;
        }
        else
        {
            _putchar(*format);
            format++;
            count++;
        }
    }
    return (count);
}
