#include "main.h"

/**
 * print_number - check if input is digit
 *@n: input char
 * Return: Return 1 if digit and  0 otherwise.
 */
void print_number(int n)
{
	unsigned int k;

	k = n;

	if (n < 0)
	{
		n = n * -1;
		k = n;
		_putchar('-');
	}

	k = k / 10;

	if (k != 0)
		print_number(k);
	_putchar((unsigned int) n % 10 + '0');
}
