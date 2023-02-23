#include "main.h"

/**
 * more_numbers - function prints 10x the numbers from 0 through 14.
 *
 * Return: 0 on success.
 */

void more_numbers(void)
{
	int i;

	for (i = 1; i < 11; i++)
	{
		int j;

		for (j = 0; j <= 14; j++)
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
}
