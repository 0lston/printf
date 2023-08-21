#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>

/*printf.c*/
int _printf(const char *format, ...);

typedef struct format_specifier
{
	char specifier;
	int (*f)(va_list);
} format_s;

/*handlers */
int handle_printf_format(const char *str, va_list args);
int handle_format_specifier(const char *str, va_list args, int *index);

/*printers */
int print_string(va_list args);
int print_char(va_list args);
int print_int(va_list args);

/*helpers*/
int _strlen(const char *);
int print(char *str);
int _putchar(char c);
#endif
