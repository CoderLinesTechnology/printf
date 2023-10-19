#include "main.h"
/**
 * _print_HEX_extra - Converts to hexadecimal
 * @num: value to be converted
 * Return: counter
 */

int _print_HEX_extra(unsigned int num)
{
	int count = 0;
	char hexDigits[] = "0123456789ABCDEF";

	if (num == 0)
	{
		_putchar('0');
		return 1;
	}

	if (num > 0)
		count += _print_HEX_extra(num / 16);

	_putchar(hexDigits[num % 16]);
	count++;

	return (count);
}
