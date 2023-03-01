#include "main.h"

/**
 * _strcat - function that concatenates two strings.
 * @dest: function parameter 1.
 * @src: function parameter 2.
 * Return: returns a pointer to resulting string dest.
 */

char *_strcat(char *dest, char *src)
{
	char *start = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (start);
}
