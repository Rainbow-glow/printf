#include "main.h"

/**
* printf_bin - prints a binary number.
* @args: arguments.
* Return: 1.
*/
int printf_bin(va_list args)
{
	int flag = 0;
	int count = 0;
	int i, a = 1, b;
	unsigned int num = va_arg(args, unsigned int);
	unsigned int n;

	for (i = 0; i < 32; i++)
	{
		n = ((a << (31 - i)) & num);
		if (n >> (31 - i))
			flag = 1;
		if (flag)
		{
			b = n >> (31 - i);
			_putchar(b + 48);
			count++;
		}
	}
	if (count == 0)
	{
		count++;
		_putchar('0');
	}
	return (count);
}
