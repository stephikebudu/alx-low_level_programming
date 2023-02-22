#include "main.h"

/**
 * print_last_digit - function prints last digit of a number
 *
 * @i: function parameter
 *
 * Return: j on success
 */

int print_last_digit(int i)
{
	int j;

	j = i % 10;

	if (i < 0)
		j = -1 * j;
	_putchar(j + '0');
	return (j);
}
