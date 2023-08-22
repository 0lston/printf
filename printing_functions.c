#include "main.h"

/**
 * print_string - Custom function to print a string in a printf-like function
 * @args: A va_list containing the variable arguments
 *
 * Description:
 * This function is a custom implementation of a string printing operation
 * within a printf-like function. It is designed to be used as a callback
 * function for the %s format specifier.
 *
 * Parameters:
 *   - args: A va_list containing the variable arguments. It should contain
 *            a char* (string) argument to be printed.
 *
 * Return:
 * The number of characters printed on success, or -1 on failure.
 *
 * Note:
 *   - This function assumes that va_arg(args, char*) returns a valid string
 *     pointer. It checks for a NULL pointer and prints "(null)" in that case.
 */
int print_string(va_list args)
{
	char *string;
	int str_len;

	string = va_arg(args, char*);
	str_len = print(string ? string : "(null)");

	return (str_len);
}

/**
 * print_char - Prints a character.
 * @args: A va_list containing the character to be printed.
 *
 * Return: The number of characters printed (always 1).
 */

int print_char(va_list args)
{
	int character;
	int ret;

	character = va_arg(args, int);
	ret = _putchar(character);

	return (ret);
}

/**
 * print_int - Prints an integer.
 * @args: A va_list containing the integer to be printed.
 *
 * Return: The number of digits printed.
 */

int print_int(va_list args)
{
	unsigned int num;
	int nbr;
	int digit;
	int divisor = 1;
	int printed = 0;

	nbr = va_arg(args, int);
	if (nbr < 0)
	{
		num = -nbr;
		_putchar('-');
		printed++;
	}
	else
	{
		num = nbr;
	}

	while (num / divisor > 9)
	{
		divisor *= 10;
	}

	while (divisor > 0)
	{
		digit = num / divisor;
		_putchar(digit + '0');
		printed++;
		num %= divisor;
		divisor /= 10;
	}
	return (printed);
}
