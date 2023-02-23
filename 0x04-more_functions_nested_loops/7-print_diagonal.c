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
		int j;
		int k;

		if (n <= 0)
		{
			_putchar('\n');
		}
		else if (n == 1)
		{
			_putchar('\\');
		}
		else
		{
			j = n - 1;

			for (k = 1; k <= j; k++)
			{
				_putchar(' ');
			}
			_putchar('\\');
		}
	}
	_putchar('\n');
}
