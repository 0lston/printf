#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>

/* structs */
/**
 * struct format_specifier - Represents a format specifier for printf.
 *
 * This structure holds information about a format specifier used in the printf
 * function. It consists of a character specifier (e.g., 's', 'd') and a
 * function pointer to the corresponding printf-like function.
 *
 * @specifier: The format specifier character (e.g., 's', 'd').
 * @f: A function pointer to the printf-like function for this specifier.
 */
typedef struct format_specifier
{
	char specifier;
	int (*f)(va_list);
} format_s;

/* _printf.c*/
int _printf(const char *format, ...);

/*handlers */
int handle_printf_format(const char *str, va_list args);
int handle_format_specifier(const char *str, va_list args, int *index);

/*printers */
int print_string(va_list args);
int print_char(va_list args);
int print_int(va_list args);

/* number conversion*/
char *convert(long int num, int base);
int print_binary(va_list args);
int print_hex(va_list args);
int print_HEX(va_list args);
int print_unsigned(va_list args);
int print_octal(va_list args);

/*helpers*/
int _strlen(const char *);
int print(char *str);
int _putchar(char c);


#endif
