#include "main.h"

/**
 * _printf - Custom implementation of printf function
 * @format: A string containing format specifiers
 * @...: Variable arguments to be formatted and printed
 *
 * Description:
 * This function is a custom implementation of the printf function.
 * It formats and prints data to the standard output based on the
 * format specifiers provided in the format string.
 *
 * Parameters:
 *   - format: A string containing format specifiers.
 *   - ...: Variable arguments to be formatted and printed based on
 *          the format specifiers in the format string.
 *
 * Return: The number of characters printed on success, or -1 on failure.
 *
 */

int _printf(const char *format, ...)
{
	va_list args;
	int printed;

	if (!format)
		return (-1);

	if (!_strlen(format))
		return (0);

	va_start(args, format);

	printed = handle_printf_format(format, args);

	va_end(args);

	_putchar(-1);

	return (printed);

}
