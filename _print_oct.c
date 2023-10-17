#include "main.h"

int _print_oct(va_list val)
{
	int i, counter = 0;
	int *array;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int temp = num;

	while (temp / 8 != 0)
	{
		temp /= 8;
		counter++;
	}
	counter++;

	array = malloc(sizeof(int) * counter);
	for (i = 0; i < counter; i++)
	{
		array[i] = num % 8;
		num /= 8;
	}
	for (i = counter - 1; i >= 0; i--)
		_putchar(array[i] + '0');
	free(array);

	return (counter);
}
