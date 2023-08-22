#include "main.h"

/*prototypes*/
char *to_upper(char *str);

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

/**
 * to_upper - transforms all lowercase letters
 *                  of a string to uppercase.
 * @str: The string to be modified.
 *
 * Return: A pointer to the changed string.
 */

char *to_upper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}

	return (str);
}
