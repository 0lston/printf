#include "main.h"

/**
 * print_unsigned - Prints an unsigned integer.
 * @args: A va_list with the argument to be printed.
 *
 * Return: The total number of characters printed.
 */

int print_unsigned(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);

	return (print(convert(n, 10)));
}
