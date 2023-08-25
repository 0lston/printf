#include "main.h"


/**
 * print_HEX - Prints an unsigned integer in uppercase hex representation.
 * @args: A va_list with the argument to print.
 *
 * Return: The total number of characters printed.
 */

int print_HEX(va_list args)
{
	unsigned int HEX;

	HEX = va_arg(args, unsigned int);

	return (print(to_upper(convert(HEX, 16))));
}

