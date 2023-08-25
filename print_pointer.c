#include "main.h"

/**
 * print_p - Prints a pointer address in hexadecimal format.
 *
 * @args: A variable argument list.
 *
 * Return: The number of characters printed.
 */

int print_p(va_list args)
{
	unsigned long int addr = (unsigned long int)va_arg(args, void *);
	char *hex = convert(addr, 16);
	int printed = 0;

	if (!addr)
		return (print("(nil)"));

	printed = print("0x");
	printed += print(hex);

	return (printed);
}
