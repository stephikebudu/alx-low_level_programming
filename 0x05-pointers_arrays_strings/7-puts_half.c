#include "main.h"

/**
 * puts_half - function prints half of string followed by new line.
 * @str: function parameter.
 * Return: 0 always.
 */

void puts_half(char *str)
{
	int a;
	int longi;
	int n;

	longi = 0;

	for (a = 0; str[a] != '\0'; a++)
		longi++;
	n = (longi / 2);

	if ((longi % 2) == 1)
		n = ((longi + 1) / 2);
	for (a = n; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}
