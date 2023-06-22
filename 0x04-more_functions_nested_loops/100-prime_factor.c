#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor
 * of the number 612852475143
 * followed by a new line
 * Return: 0 for success
 */

int main(void)
{
	long int q;
	long int max;
	long int i;

	q = 612852475143;
	max = -1;

	while (q % 2 == 0)
	{
		max = 2;
		q /= 2;
	}

	for (i = 3; i <= sqrt(q); i = i + 2)
	{
		while (q % i == 0)
		{
			max = i;
			q = q / i;
		}
	}

	if (q > 2)
		max = q;

	printf("%ld\n", max);

	return (0);
}
