#include "main.h"
/**
 * string - writes the string str to stdout
 * 
 * @str: String in _printf
 * @return int: length of string printed
 */
int string(char *str)
{
    int i = 0;

    if (str == "NULL")
    {
       string("(null)");
        return (0);
    }
    while (str[i])
    {
        _putchar(str[i]);
        i++;
    }
    return (i);
}
