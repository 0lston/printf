#include "main.h"


/**
 * _strlen - Computes the length of a string.
 *
 * This function calculates the length of the input string by iterating
 * through its characters until the null-terminator is encountered.
 *
 * @str: The input string.
 *
 * Return: The length of the string (number of characters).
 */

int _strlen(const char *str)
{
	int i = 0;

	if (!str)
		return (0);
	while (str[i])
		i++;

	return (i);
}

/**
 * print - Prints a string to the standard output.
 *
 * This function takes a string as input and prints it character by character
 * to the standard output using the _putchar function.
 *
 * @str: The input string to be printed.
 *
 * Return: The number of characters printed.
 */
int print(char *str)
{
	int i;

	for (i = 0; str[i] ; i++)
		_putchar(str[i]);

	return (i);
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
