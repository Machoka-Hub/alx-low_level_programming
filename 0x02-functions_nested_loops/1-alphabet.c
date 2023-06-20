#include "main.h"

/**
 * print_alphabet - print all alphabet
 * print in lowercase and add a newline
 */

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		_putchar(alpha);

	_putchar('\n');
}

