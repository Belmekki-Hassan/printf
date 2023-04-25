#include "main.h"

/**
 * print_binary - prints an unsigned integer in binary format
 * @n: unsigned integer to print
 * @count: pointer to a counter of printed characters
 */
void print_binary(unsigned int n, int *count)
{
char binary[100];
int i = 0;

if (n == 0)
{
putchar(0 + '0');
*count += 1;
return;
}

while (n > 0)
{
binary[i] = (n % 2) + '0';
n /= 2;
i++;
}

for (i = i - 1; i >= 0; i--)
{
putchar(binary[i]);
*count += 1;
}
}
