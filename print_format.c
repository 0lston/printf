#include "main.h"

/**
 * handle_printf_format - Handles the printf format string and arguments.
 * @str: The format string.
 * @args: The list of arguments.
 *
 * This function processes the format string, extracts format specifiers,
 * and calls corresponding handler functions for each specifier.
 *
 * Return: The total number of characters printed.
 */

int handle_printf_format(const char *str, va_list args)
{
	int printed = 0,
	    index = 0,
	    format_result = 0;

	for (index = 0; str[index] != 0; index++)
	{
		if (str[index] == '%')
		{
			format_result = handle_format_specifier(str, args, &index);
			if (format_result == -1)
				return (-1);

			printed += format_result;
			continue;
		}

		_putchar(str[index]);
		printed++;
	}


	return (printed);
}

/**
 * handle_format_specifier - Handles individual format specifiers.
 * @str: The format string.
 * @args: The list of arguments.
 * @index: A pointer to the current position in the format string.
 *
 * This function handles individual format specifiers by checking for supported
 * specifiers and calling the corresponding handler functions.
 *
 * Return: The total number of characters printed for this specifier.
 */

int handle_format_specifier(const char *str, va_list args, int *index)
{
	int printed = 0,
	    i = 0,
	    format_count;

	format_s formats[] = {
		{'s', print_string}, {'c', print_char},
		{'i', print_int}, {'d', print_int}
	};

	*index += 1;

	if (str[*index] == '\0')
		return (-1);

	if (str[*index] == '%')
	{
		_putchar('%');
		return (1);
	}

	while (str[*index] == ' ' && str[*index])
		(*index)++;
	if (!str[*index])
		return (-1);

	format_count = sizeof(formats) / sizeof(formats[0]);

	for (i = 0; i < format_count; i++)
	{
		if (str[*index] == formats[i].specifier)
		{
			printed = formats[i].f(args);
			return (printed);
		}

	}

	_putchar('%'), _putchar(str[*index]);
	return (2);
}
