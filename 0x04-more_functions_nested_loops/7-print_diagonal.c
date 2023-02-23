#include "main.h"

/**
 * print_diagonal - function draws diagonal on standard output.
 * @n: function parameter.
 * Return: 0 on success.
 */

void print_diagonal(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('\\');
		}
	}
	_putchar('\n');
}
