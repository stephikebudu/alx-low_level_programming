#include "main.h"

/**
 * _strcpy - function copies string pointed to onto buffer dest points to.
 * @dest: function parameter 1.
 * @src: function parameter 2.
 * Return: pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j;

	while (*(src + i) != '\0')
	{
		i++;
	}
	for (j = 0; j < i; j++)
	{
		dest[j] = src[j];
	}
	dest[j] = '\0';
	return (dest);
}
