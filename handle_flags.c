void handle_flags(char specifier, int num, int *count, int width, int precision, int is_negative)
{
    if (specifier == 'd' || specifier == 'i' || specifier == 'u')
    {
        if (is_negative)
            _putchar('-');
        else if (num >= 0)
        {
            if (*count > 0 && num >= 0)
            {
                if (*count > 0 && num >= 0)
                    _putchar(' ');
                else if (*count > 0 && num == 0 && precision != 0)
                    _putchar(' ');
            }
            else if (num < 0 && precision <= width)
                _putchar(' ');
            if (num == 0 && precision != 0)
                _putchar('0');
            print_unsigned(num, count);
        }
    }
    else if (specifier == 'o')
    {
        if (num == 0 && precision == 0)
            return;
        else if (num == 0 && precision != 0)
            _putchar('0');
        else
        {
            if (*count > 0)
                _putchar(' ');
            print_octal(num, count);
        }
    }
    else if (specifier == 'x' || specifier == 'X')
    {
        if (*count > 0)
            _putchar(' ');
        if (specifier == 'x')
            print_hex_lowercase(num, count);
        else if (specifier == 'X')
            print_hex_uppercase(num, count);
    }
}
