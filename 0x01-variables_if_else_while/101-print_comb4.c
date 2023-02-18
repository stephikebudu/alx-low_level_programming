#include <stdio.h>

/**
 * main - program prints nummbers in ascending no-repition order
 *
 * Return: returns 0
 */

int main(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i < 8; i++)
	{
		for (j = 1; j < 9; j++)
		{
			if (i < j && i != j)
			{
				for (k = 2; k < 10; k++)
				{
					if (k < j && k != j)
					{
						putchar(i + '0');
						putchar(j + '0');
						putchar(k + '0');
						if (i * k != 63)
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	return (0);
}
