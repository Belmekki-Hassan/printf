#ifndef _MAIN_H
#define _MAIN_H
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

int _putchar(char *c);
int _printf(const char *format, ...);
struct printf_format
{
	char *op;
	int (*type)(va_list var);
} ;
typedef struct printf_format pf ; 
#endif
