#include "main.h"

/**
 * print_diagonal - function draws diagonal on standard output.
 * @n: function parameter.
 * Return: 0 on success.
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		_putchar('\\');
	}
	_putchar('\n');
}
