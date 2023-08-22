#include "main.h"

/**
 * convert - Convert a long integer to a string in the specified base.
 *
 * This function takes a long integer `num` and converts it into a string
 * representation in the given base. The supported bases are between 2 and 16,
 * inclusive.
 *
 * @num: The long integer to be converted.
 * @base: The base for the conversion (between 2 and 16).
 *
 * Return: A pointer to the string representation of the converted number. The
 *         string is stored in a static buffer and should not be modified. It
 *         remains valid until the next call to this function.
 *
 * Example:
 *   char *binary = convert(42, 2);  // Converts 42 to binary representation.
 *   printf("Binary: %s\n", binary); // Prints "Binary: 101010".
 *
 * Note: The returned string is statically allocated within the function,
 * so it should not be freed or modified by the caller.
 */

char *convert(long int num, int base)
{
	const char *array = "0123456789abcdef";
	static char buffer[50];
	char *ptr = &buffer[49];
	char sign = (num < 0) ? '-' : 0;
	unsigned long nbr = (num < 0) ? -num : num;

	*ptr = '\0';

	do {
		*--ptr = array[nbr % base];
		nbr /= base;
	} while (nbr);

	if (sign)
		*--ptr = sign;

	return (ptr);
}
