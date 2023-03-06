#include "main.h"

/**
 * _strspn - function that gets length of prefix substring.
 * @s: function parameter 1.
 * @accept: function parameter 2.
 *
 * Return: 0 on success.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				n++;
				break;
			}
			else if (accept[r + 1] == '\0')
			{
				return (n);
			}
		}
		s++;
	}
	return (n);
}
