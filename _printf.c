#include "Find_Format.c"
#include "main.h"
/**
 * _printf - A printf clone
 * @format: const pointer to a char - % include formats
 * Return: number of characters printed.
*/
int _printf(const char *format, ...)
{
	int i = 0, *nb, *nb3;
	int table[2];
	int table3[2];
	char *copyP_Format;
	char array[100];
	va_list args;

	nb = &table[0];
	nb3 = &table3[0];
	nb[0] = 0;
	nb[1] = -1;
	if (format != NULL)
	{
		nb[1] = 0;
		copyP_Format = _strcpy(array, format);
		va_start(args, format);
		while (copyP_Format[i] != '\0')
		{
			if (copyP_Format[i] == '%')
			{
				nb3 = Find_Format(i, copyP_Format, args);
				if (nb3[1] == -1)
				return (-1);
				nb[1] += nb3[1];
				i += nb3[0];
			}
			else
			{
				nb[1] += _putchar(&copyP_Format[i]);
			}
			i++;
		}
		va_end(args);
	}

return (nb[1]);
}
