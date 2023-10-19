#include "main.h"
/**
 * _print_exc_string - Prints exclusive strings
 * @val: value
 * Return: number of characters printed
 */
int _print_exc_string(va_list val)
{
	char *s;
	int i, len = 0;

	s = va_arg(val, char *);
	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < 32 || s[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			len += 2;
			len += _print_HEX_extra(s[i]);
		}
		else if (s[i] == '\n')
		{
			_putchar('\\');
			_putchar('x');
			len += 2;
			_putchar('0');
			len++;
			_putchar('A');
			len++;
		}
		else
		{
			_putchar(s[i]);
			len++;
		}
	}
	return (len);
}

