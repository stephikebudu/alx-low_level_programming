#include "main.h"

/**
 * _strncat - function that concatenates string using at most n bytes from src.
 * @dest: function parameter 1.
 * @src: function parameter 2.
 * @n: function parameter 3.
 * Return: returns pointer to string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
