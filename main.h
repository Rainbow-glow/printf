#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <unistd.h>
#include <stdarg.h>

/**
 * struct format - matches theconversion specifiers for printf
 * @id: a pointer of type char.
 * @f: a pointer to function.
 *
 */

typedef struct format
{
	char *id;
	int (*f)();
} convert_match;

int _putchar(char c);
int _printf(const char *format, ...);
int printf_char(va_list args);
int _strlen(char *s);
int _strlenconst(const char *s);
int printf_string(va_list args);
int printf_bin(va_list args);
int printf_pointer(va_list args);
int printf_hex_convert(unsigned long int num);
int printf_37(void);
int printf_HEX_convert(unsigned int num);
int printf_exclusive_string(va_list args);
int printf_HEX(va_list args);
int printf_hex(va_list args);
int printf_oct(va_list val);
int printf_unsigned(va_list args);
int printf_rev_s(va_list args);
int printf_rot13(va_list args);
int printf_int(va_list args);
int printf_dec(va_list args);


#endif
