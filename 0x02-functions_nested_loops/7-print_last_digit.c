#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @p: the int to extract the last digit from
 * Return: value of the last digit
 */

int print_last_digit(int p)
{
	int q;

	if (p < 0)
	p = -p;

	q = p % 10;

	if (q < 0)
		q = -q;

	_putchar(q + '0');

	return (q);
}
