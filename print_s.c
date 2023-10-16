#include "main.h"

int _strlen(char *s);
int _strlenconst(const char *s);
int printf_string(va_list args);

/**
* _strlen - Returns the lenght of a string.
* @s: Type char pointer
* Return: c.
*/

int _strlen(char *s)
{
	int c;

	for (c = 0; s[c] != 0; c++)
		;
	return (c);

}
/**
* _strlenconst - return the length of a string for a constant char pointer
* @s: a char pointer
* Return: c
*/
int _strlenconst(const char *s)
{
	int c;

	for (c = 0; s[c] != 0; c++)
		;
	return (c);
}

/**
* printf_string - print a string.
* @args: argument.
* Return: the length of the string.
*/

int printf_string(va_list args)
{
	char *s;
	int i, len;

	s = va_arg(args, char *);
	if (s == NULL)
	{
		s = "(null)";
		len = _strlen(s);
		for (i = 0; i < len; i++)
		_putchar(s[i]);
		return (len);
	}
	else
	{
		len = _strlen(s);
		for (i = 0; i < len; i++)
		_putchar(s[i]);
		return (len);
	}
}
