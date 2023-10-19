#include "main.h"

/**
*_print_pointer - Pointer Address function
*@val: first parameter
*Return: adfress
*/
int _print_pointer(va_list val)
{
	void *p = va_arg(val, void *);
	unsigned long int ptrValue = (unsigned long int)p;

	if (p == NULL)
	{
		_putchar('(');
		_putchar('n');
		_putchar('i');
		_putchar('l');
		_putchar(')');
		return 5;
	}

	_putchar('0');
	_putchar('x');
 	return _print_hex_extra(ptrValue) + 2;
}
