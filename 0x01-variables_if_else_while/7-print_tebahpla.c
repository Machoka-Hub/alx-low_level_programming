#include <stdio.h>

/**
 * main - main function
 * prints the lowercase alphabet in reverse,
 * Return:0
 */

int main(void)
{
	char alpha[26] = "zyxwvutsrqponmlkjihgfedcba";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alpha[i]);
	}
	putchar('\n');
	return (0);
}

