#include "main.h"

/**
 * _abs - function that computes absolute value of number
 *
 * @i: function parameter
 *
 * Return: i on success
 */

int _abs(int i)
{
	if (i < 0)
		i = -1 * i;
	else if (i >= 0)
		i = i;
	return (i);
}
