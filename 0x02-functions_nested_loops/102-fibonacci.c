#include <stdio.h>

/**
 * main - main function
 *
 * Return: 0 on success
 */

int main(void)
{
	int i;
	int j;
	int x;
	int next_term;

	i = 1;
	j = 2;
	next_term = i + j;

	printf("%d, %d, ", i, j);
	for (x = 3; x <= 50; x++)
	{
		printf("%d", next_term);
		i = j;
		j = next_term;
		next_term = i + j;
		if (x != 50)
			printf(", ");
	}
	printf("\n");
	return (0);
}
