#include "main.h"

/**
 * print_hex - Prints an unsigned integer in hexadecimal representation.
 * @args: A va_list with the argument to print.
 *
 * Return: The total number of characters printed.
 */

int print_hex(va_list args)
{
	unsigned int hex;

	hex = va_arg(args, unsigned int);


	return (print(convert(hex, 16)));
}
