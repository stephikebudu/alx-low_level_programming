#include "main.h"

/**
 * print_numbers - function prints numbers using _putchar()
 *
 * Return: 0 on success
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
