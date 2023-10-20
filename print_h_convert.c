#include "main.h"

/**
* printf_hex_convert - converts to an hexadecimal number in lowercase.
* @num: arguments.
* Return: count.
*/
int printf_hex_convert(unsigned long int num)
{
	long int i;
	long int *array;
	long int count = 0;
	unsigned long int temp = num;

	while (num / 16 != 0)
	{
		num = num / 16;
		count++;
	}
	count++;
	array = malloc(count * sizeof(long int));

	for (i = 0; i < count; i++)
	{
		array[i] = temp % 16;
		temp = num / 16;
	}
	for (i = count - 1; i >= 0; i--)
	{
		if (array[i] > 9)
		array[i] = array[i] + 39;
		_putchar(array[i] + '0');
	}
	free(array);
	return (count);
}
