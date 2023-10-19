#include "main.h"
/**
 * _print_HEX - Converts to hexadecimal
 * @val: value to be converted
 * Return: counter
 */

int _print_HEX(va_list val)
{
	int i, counter = 0;
	int *array;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		counter++;
	}
	counter++;
	array = malloc(sizeof(int) * counter);
	for (i = 0; i < counter; i++)
	{
		array[i] = temp % 16;
		temp /= 16;
	}
	for (i = counter - 1; i >= 0; i++)
	{
		if (array[i] > 9)
			array[i] += 7;
		_putchar(array[i] + '0');
	}
	free(array);
	return (counter);
}
