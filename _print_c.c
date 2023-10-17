#include "main.h"

/**
 * _print_char - prints a character
 * @c: character parameter
 * Return: 1
 */

int _print_char(va_list c)
{
	char _c;

	_c = va_arg(c, int);
	_putchar(_c);

	return (1);
}
