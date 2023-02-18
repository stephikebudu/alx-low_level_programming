#include <stdio.h>

/**
 * main - program prints all combo of 2 digits possible
 *
 * Return: returns 0
 */

int main(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			if (i == 9 && j == 8)
			{
				putchar(' ');
				if (i * j != 81)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
