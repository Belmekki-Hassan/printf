#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void print_percent(int *count);
void print_string(va_list args, int *count);
void print_char(va_list args, int *count);
int _putchar(char c);
int _printf(const char *format, ...);
int _print_integer(int num);
int string(char *str);
#endif
