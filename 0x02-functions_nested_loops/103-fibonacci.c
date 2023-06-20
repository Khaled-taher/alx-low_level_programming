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
	fibonacci_sum(32);
	return (0);
}
/* betty style doc for function print_natural goes there */
/**
 * fibonacci_sum - add multiples of 3 and 5 together
 *@n: Input number
 * return: Return nothing
 */
void fibonacci_sum(int n)
{
	long int a, b, c, sum;
	int i, k;

	k = n - 2;
	a = 1;
	b = 2;
	sum = 2;

	for (i = 0; i < k; i++)
	{
		c = a + b;
		if (c % 2 == 0)
			sum = sum + c;
		a = b;
		b = c;
	}
	printf("%ld\n", sum);
}
