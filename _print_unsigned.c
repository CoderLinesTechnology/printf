#include "main.h"

/**
*_print_unsigned - Function to print integer numbers
*@val: number parameter
*Return: numbers to be printed
*/

int _print_unsigned(va_list val)
{
	int n = va_arg(val, int);
	int num, last = n % 10, digit, exp = 1;
	int i = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp *= 10;
			num /= 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num -= (digit * exp);
			exp /= 10;
			i++;
		}
	}
	_putchar(last + '0');
	return (i);
}
