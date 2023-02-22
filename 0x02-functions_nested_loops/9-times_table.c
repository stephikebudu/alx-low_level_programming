#include "main.h"

/**
 * times_table - function prints 9 times table
 *
 * Return: 0 on success
 */

void times_table(void)
{
	int i;
	int j;
	int num;

	for (i = 0; i  < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			num = i * j;
			_putchar(num + '0');
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}
