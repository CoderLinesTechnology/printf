#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>




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




#endif
