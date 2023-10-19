#include "main.h"
/**
*_strlen - Returns the length of a string.
*@s: Pointer to a string.
*
*Return: The length of the string.
*/

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}

/**
*_strlenc - Strlen function for const char
*@s: character pointer
*Return: 1
*/

int _strlenc(const char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
		;
	return (1);
}
