#include "main.h"

/**
 * print_rot13 - Prints a string with ROT13 substitution.
 *
 * @args: A variable argument list containing a string.
 *
 * Return: The number of characters printed.
 */

int print_rot13(va_list args)
{
	int i, j;
	char *str = va_arg(args, char *);
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; str[i]; i++)
	{
		for (j = 0; alpha[j]; j++)
		{
			if (str[i] == alpha[j])
			{
				_putchar(rot[j]);
				break;
			}
		}
		if (!alpha[j])
			_putchar(str[i]);
	}

	return (i);
}
