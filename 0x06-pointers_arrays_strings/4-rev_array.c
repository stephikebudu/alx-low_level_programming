#include "main.h"

/**
 * reverse_array - function reverses the content of an array.
 * @a: function parameter 1.
 * @n: function parameter 2.
 *
 * Return: returns 0 always.
 */

void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
