#include "main.h"

/**
 * _isdigit - function checks for integer
 *@c: function parameter
 *Return: 1 on success, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
