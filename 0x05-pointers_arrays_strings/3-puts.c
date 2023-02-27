#include "main.h"

/**
 * _puts - function to insert new line after string.
 * @str: function parameter.
 * Return: always 0.
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
