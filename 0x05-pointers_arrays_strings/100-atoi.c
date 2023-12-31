#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 * Return: int n converted from the string
 */

int _atoi(char *s)
{
	int x, y, n, len, p, digit;

	x = 0;
	y = 0;
	n = 0;
	len = 0;
	p = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (x < len && p == 0)
	{
		if (s[x] == '-')
			++y;

		if (s[x] >= '0' && s[x] <= '9')
		{
			digit = s[x] - '0';
			if (y % 2)
				digit = -digit;
			n = n * 10 + digit;
			p = 1;
			if (s[x + 1] < '0' || s[x + 1] > '9')
				break;
			p = 0;
		}
		x++;
	}

	if (p == 0)
		return (0);

	return (n);
}
