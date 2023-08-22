#include"main.h"

/**
 * _putchar - Writes a character to the standard output or flushes the buffer.
 *
 * @c: The character to write.
 *
 * Return: The number of characters written (i) or -1 on error.
 */
int _putchar(char c)
{
	static int i;             /* Static counter for characters stored in buffer */
	static char buffer[1024]; /* Static character buffer to store output */

	if (c == -1 || i >= 1024) /* Check if buffer should be flushed */
	{
		write(1, buffer, i); /* Write buffered characters to standard output */
		i = 0;               /* Reset the buffer index */
	}

	if (c != -1) /* Check if c is not a flush signal */
		buffer[i++] = c; /* Store c in the buffer and increment index */

	return (1);
}

