#include <stdio.h>

/**
 * main - displays base 16 numbers in lower case
 *
 * Return: returns 0
 */

int main(void)
{
	int i;
	char j;

	for (i = 0; i < 10; i++)
		putchar(i + '0');
	for (j = 'a'; j <= 'f'; j++)
		putchar(j);
	putchar('\n');
	return (0);
}
