#include <stdio.h>

/**
 * main - program displays number pairs in ascending order
 *
 * Return: returns 0
 */

int main(void)
{
	int i;
	int j;

	for (i = 0; i < 9; i++)
	{
		for (j = 1; j < 10; j++)
		{
			if (i < j && i != j)
			{
				putchar(i + '0');
				putchar(j + '0');
				if (i * j != 72)
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
