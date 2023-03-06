#include "main.h"

/**
 * _strpbrk - function that searches a string of any set of bytes.
 * @s: function parameter 1.
 * @accept: function parameter 2.
 *
 * Return: 0 on success.
 */

char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
