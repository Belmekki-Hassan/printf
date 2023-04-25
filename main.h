#ifndef _MAIN_H
#define _MAIN_H
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

void print_percent(int *count);
void print_string(va_list args, int *count);
void print_char(va_list args, int *count);
int _putchar(char c);
int _printf(const char *format, ...);
int _printfvtwo(const char *format, ...);
int string(char *str);
#endif
