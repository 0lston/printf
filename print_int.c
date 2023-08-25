#include "main.h"

/**
 * print_int - Prints an integer.
 *
 * @args: A variable argument list containing an integer.
 *
 * Return: The number of characters printed.
 */

int print_int(va_list args)
{
	int num;

	num = va_arg(args, int);

	return (print(convert(num, 10)));
}
