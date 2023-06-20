/* more headers goes there */
#include "main.h"
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - Point of start
 * print_natural - Print the alphabet 10 tims
 * Return: return 0
 */
int main(void)
{
	print_natural();
	return (0);
}
/* betty style doc for function print_natural goes there */
/**
 * print_natural - add multiples of 3 and 5 together
 *
 * return: Return nothing
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
