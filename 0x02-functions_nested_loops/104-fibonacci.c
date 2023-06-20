#include <stdio.h>

/**
 * main - first 98 fibonacci numbers
 * separated by a comma
 * followed by a space
 * no hardcode of numbers except for 1 and 2
 * Return: 0
 */

int main(void)
{
	unsigned long int x;
	unsigned long int before = 1;
	unsigned long int after = 2;
	unsigned long int y = 1000000000;
	unsigned long int before1;
	unsigned long int before2;
	unsigned long int after1;
	unsigned long int after2;

	printf("%lu", before);

	for (x = 1; x < 91; x++)
	{
		printf(", %lu", after);
		after += before;
		before = after - before;
	}

	before1 = (before / y);
	before2 = (before % y);
	after1 = (after / y);
	after2 = (after % y);

	for (x = 92; x < 99; x++)
	{
		printf(", %lu", after1 + (after2 / l));
		printf("%lu", after2 % l);
		after1 = after1 + before1;
		before1 = after1 - before1;
		after2 = after2 + before2;
		before2 = after2 - before2;
	}
	printf("\n");
	return (0);
}

