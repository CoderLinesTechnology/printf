#include "main.h"
/**
*_print_s - Print a string
*@val: String value parameter
*Return: length of the string
*/

int _print_s(va_list val)
{
	char *str;
	int i, length;

	str = va_arg(val, char *);
	if (str == NULL)
	{
		str = "\0";
		return (1);
	}
	else
	{
		length = _strlen(str);
		for (i = 0; i < length; i++)
		_putchar(str[i]);
		return (length);
	}
}
