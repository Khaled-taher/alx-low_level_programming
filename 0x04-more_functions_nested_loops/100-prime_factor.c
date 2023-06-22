#include "main.h"
#include <math.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	long int n, i, prime;
	double nx;

	n = 612852475143;
	nx = sqrt(n);

	for (i = 1; i <= nx; i++)
	{
		if (n % i == 0)
			prime = n / i;
	}
	printf("%ld\n", prime);
	return (0);
}
