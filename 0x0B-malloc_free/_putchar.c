#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes characrter to standard output.
 * @c: function parameter, the character to print.
 *
 * Return: 1 on success
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
