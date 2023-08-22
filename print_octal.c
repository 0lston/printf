#include "main.h"

/**
 * print_octal - Prints an integer in octal representation.
 * @args: A va_list with the argument to print.
 *
 * Return: The total number of characters printed.
 */

int print_octal(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);

	return (print(convert(n, 8)));

}
