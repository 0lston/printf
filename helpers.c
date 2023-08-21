#include "main.h"


int _strlen(const char *str)
{
	int i = 0;

	while (str[i])
		i++;

	return (i);
}

int print(char *str)
{
	int i;

	for (i = 0; str[i] ; i++)
		_putchar(str[i]);

	return (i);
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}
