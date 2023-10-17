#include "main.h"
/**
 * _print_rev_string - function to print a string in reverse manner
 * @val: arguments 
 * Return: the strings
 */

int _print_rev_string(va_list val)
{
	char *s = va_arg(val, char *);
	int i;
	int j = 0;

	if (s == NULL)
		s = "(null)";
	while (s[j] != '\0')
		j++;
	for (i = j - 1; i >= 0; i--)
		_putchar(s[i]);
	return (j);
}
