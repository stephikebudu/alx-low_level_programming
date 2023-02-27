#include "main.h"

/**
 * swap_int - function that points to the value of the other variable.
 * @a: function parameter.
 * @b: function parameter.
 * Return: 0 on success.
 */

void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
