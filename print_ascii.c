#include "main.h"

int is_printable(char);

/**
 * print_ascii - Prints a string, escaping non-printable characters \xAA.
 *
 * @args: A variable argument list.
 *
 * Return: The number of characters printed.
 */

int print_ascii(va_list args)
{
	char *str = va_arg(args, char *);
	int i;
	int printed = 0;
	char *hex;

	if (!str)
		return (print("(nil)"));
	for (i = 0; str[i]; i++)
	{
		if (!is_printable(str[i]))
		{
			printed += print("\\x");
			hex = convert(str[i], 16);
			if (_strlen(hex) < 2)
				printed += _putchar('0');
			printed += print(to_upper(hex));

		}
		else
			printed += _putchar(str[i]);

	}
	return (printed);
}

/**
 * is_printable - Checks if a character is a printable ASCII character.
 *
 * @c: The character to be checked.
 *
 * Return: 1 if the character is printable, 0 otherwise.
 */

int is_printable(char c)
{
	if ((c > 0 && c < 32) || c >= 127)
		return (0);
	else
		return (1);
}
