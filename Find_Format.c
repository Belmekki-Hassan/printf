#include "main.h"
/**
 *Find_Format - matching format specifier 
 *@i: pour le balayage
 *@copyP_Format: format 
 *@args: arguments to print
 *Return: number of characters printed
*/
int *Find_Format(int i, char *copyP_Format, va_list args)
{
	pf P_Format[] = {
			{"c", p_char},
			{"s", p_string},
			{"%", p_percent},
			{NULL, NULL}
			};
	int j = 0, k = 1, *nb2;
	int table2[2];

	i++;
	nb2 = &table2[0];
	nb2[0] = 0;
	nb2[1] = 0;
	while (P_Format[j].ob != NULL)
	{
		if (copyP_Format[i] == *P_Format[j].ob)
		{ nb2[1] = P_Format[j].type(args);
			break; }
		j++;
	}
	if (P_Format[j].ob == NULL && copyP_Format[i] != '\0')
	{ _putchar("%");
	_putchar(&copyP_Format[i]);
	nb2[1] += 2; }
	if (P_Format[j].ob == NULL && copyP_Format[i] == '\0')
	{ nb2[1] = -1; }
	nb2[0] = k;
return (nb2);
}
