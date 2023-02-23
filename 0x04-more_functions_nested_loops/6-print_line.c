#include "main.h"

/**
 * print_line - prints line n times
 * @n: function parameter
 * Return: 0 on success
 */

void print_line(int n)
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
			_putchar('_');
		}
	}
	_putchar('\n');
}
