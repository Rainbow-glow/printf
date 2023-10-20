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
int printf_pointer(va_list val);
int printf_hex_convert(unsigned long int num);
int printf_HEX_convert(unsigned int num);
int printf_exclusive_string(va_list val);
int printf_HEX(va_list args);
int printf_hex(va_list args);
int printf_oct(va_list val);
int printf_unsigned(va_list args);
int printf_srev(va_list args);
int printf_rot13(va_list args);
int printf_int(va_list args);
int printf_dec(va_list args);


#endif
