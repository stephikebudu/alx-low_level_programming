#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - check - string for digit
 * @str: array string
 *
 * Return: Always 0 on success
 */

int check_num(char *str)
{
	/* declare variables */
	unsigned int count;

	count = 0;

	while (count < strlen(str)) /* count string */
	{
		if (!isdigit(str[count])) /* check if str is digit */
		{
			return (0);
		}
		count++;
	}
	return (1);
}

/**
 * main - print the name of program
 * @argc: count arguments
 * @argv: arguments
 *
 * Return: Always 0 on success.
 */

int main(int argc, char *argv[])
{
	/* declare variables */
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;

	while (count < argc) /* checks the whole array */
	{
		if (check_num(argv[count]))
		{
			str_to_int = atoi(argv[count]); /* atoi program converts string to int */
			sum += str_to_int;
		}
		else /* condition for one number being a symbol, maybe not digit */
		{
			printf("Error\n");
			return (1);
		}
		count++;
	}
	printf("%d\n", sum); /* print sum */
	return (0);
}
