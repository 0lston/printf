#include "main.h"

/**
 * print_binary - Prints an unsigned integer in binary representation.
 *
 * @args: A va_list with the argument to print.
 *
 * Description:
 * This function is used as a custom conversion specifier for printf.
 * It takes an unsigned integer from the va_list, converts it to its binary
 * representation using the convert function, and then prints the result using
 * the print function.
 *
 * Return: The total number of characters printed.
 */

int print_binary(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);


	return (print(convert(n, 2)));

}
