#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - main function
 * prints the alphabet in lowercase except q and e
 * Return: 0
 */

int main(void)
{
	int x;

	for (x = 97; x < 123; x++)
	{
		if (x != 101 && x != 113)
		{
			putchar(x);
		}
	}
	putchar('\n');
	return (0);
}


