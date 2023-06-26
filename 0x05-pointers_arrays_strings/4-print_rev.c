#include "main.h"

/**
 * print_rev - string is printed in reverse
 * folowed by a new line
 * @s: string
 * return: 0
 */

void print_rev(char *s)
{
	int longi = 0;
	int z;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	s--;
	for (z = longi; z > 0; z--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
