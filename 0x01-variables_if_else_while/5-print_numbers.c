#include <stdio.h>

/**
 * main - main function
 * prints all single digit numbers of base 10 starting from 0
 * Return: 0
 */

int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		printf("%d", x);
	}
	putchar('\n');
	return (0);
}

