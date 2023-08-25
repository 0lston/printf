#include "main.h"

/**
 * print_rev - Prints a string in reverse order.
 *
 * @args: A variable argument list containing a string.
 *
 * Return: The number of characters printed.
 */

int print_rev(va_list args)
{
	int i;
	char *str = va_arg(args, char *);
	int len = _strlen(str);

	for (i = len - 1; i >= 0; i--)
		_putchar(str[i]);

	return (len);
}
