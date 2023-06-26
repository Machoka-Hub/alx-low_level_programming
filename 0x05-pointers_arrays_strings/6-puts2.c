#include "main.h"

/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * folowed by a new line
 * @str: input
 * Return: print
 */

void puts2(char *str)
{
	int longb = 0;
	int t = 0;
	char *y = str;
	int z;

	while (*y != '\0')
	{
		y++;
		longb++;
	}
	t = longb - 1;
	for (z = 0 ; z <= t ; z++)
	{
		if (z % 2 == 0)
	{
		_putchar(str[z]);
	}
	}
	_putchar('\n');
}
