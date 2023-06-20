/* more headers goes there */
#include "main.h"

/* betty style doc for function main goes there */
/**
 * print_natural - Print the alphabet 10 tims
 *
 * Return: return nothing
 */
void print_natural(void)
{
	int i, sum;
	
	sum = 0;
	
	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		sum = sum + i;
	}

	printf("%d\n", sum);
}
