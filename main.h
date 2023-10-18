#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <unistd.h>
#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
int printf_char(va_list args)
int _strlen(char *s);
int _strlenconst(const char *s);
int printf_string(va_list args);
int printf_bin(va_list args);

#endif
