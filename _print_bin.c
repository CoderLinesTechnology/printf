#include "main.h"
/**
 * _print_bin - converts to binary
 * @val: parameters
 * Return: integer
 */

int _print_bin(va_list val)
{
	unsigned int num = va_arg(val, unsigned int);
	int count = 0;
	unsigned int mask = 1U << (sizeof(unsigned int) * 8 - 1);
	int flag = 0;

	while (mask > 0)
	{
		if (num & mask)
		{
			_putchar('1');
			count++;
			flag = 1;
		}
		else if (flag)
		{
			_putchar('0');
			count++;
		}
		mask >>= 1;
	}

	if (count == 0)  /* If the number is 0, print '0' */
	{
		_putchar('0');
		count++;
	}

	return count;
}
