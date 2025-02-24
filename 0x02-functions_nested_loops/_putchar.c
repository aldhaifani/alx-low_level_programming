#include <unistd.h>

/**
 * _putchar - Function that writes a char to stdout
 *
 * Return: on success the written character,
 *		 on failure, negative number
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
