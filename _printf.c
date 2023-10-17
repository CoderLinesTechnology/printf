#include "main.h"
/**
 * _printf - is a function that selects the correct function to print.
 * @format: identifier to look for.
 * Return: the length of the string.
 */
int _printf(const char * const format, ...)
{
	convert_match m[] = {
		{"%s", _print_s}, {"%c", _print_c},
		{"%%", _print_per},
		{"%i", _print_int}, {"%d", _print_dec}, {"%r", _print_rev_string},
		{"%R", _print_rot13}, {"%b", _print_bin}, {"%u", _print_unsigned},
		{"%o", _print_oct}, {"%x", _print_hex}, {"%X", _print_HEX},
		{"%S", _print_exc_string}, {"%p", _print_pointer}
	};

	va_list args;
	int i = 0, j, len = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Here:
	while (format[i] != '\0')
	{
		j = 13;
		while (j >= 0)
		{
			if (m[j].id[0] == format[i] && m[j].id[1] == format[i + 1])
			{
				len += m[j].f(args);
				i = i + 2;
				goto Here;
			}
			j--;
		}
		_putchar(format[i]);
		len++;
		i++;
	}
	va_end(args);
	return (len);
}
