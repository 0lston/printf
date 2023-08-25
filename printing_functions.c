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

	character = va_arg(args, int);
	_putchar(character);

	return (1);
}
