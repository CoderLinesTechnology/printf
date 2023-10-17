#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.>

typedef struct format
{
	char *id;
	int (*f)();
} convert_match;

int _printf(const char *format, ...);
int _print_char(va_list c);
int _putchar(char c);
int _print_s(va_list val);
int _strlen(char *s);
int _strlenc(const char *s);
int _print_per(void);
int _print_int(va_list val);
int _print_dec(va_list val);
int _print_unsigned(va_list val);
int _print_bin(va_list val);
int _print_oct(va_list val);
int _print_hex(va_list val);
int _print_HEX(va_list val);
int _print_HEX_extra(unsigned int num);
int _print_exc_string(va_list val);
int _print_rev_string(va_list val);
int _print_hex_extra(unsigned long int num);
int _print_pointer(va_list val);

int _print_rot13(va_list args);



#endif
