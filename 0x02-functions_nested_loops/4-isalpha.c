#include "main.h"

/**
 * _isalpha - function checks for uppercase/lowercase alphabet
 *
 * @c: function parameter
 *
 * Return: 1 for alphabet, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
