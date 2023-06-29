#include "main.h"

/**
 * print_number - check if input is digit
 *@n: input char
 * Return: Return 1 if digit and  0 otherwise.
 */
void print_number(int n)
{
	unsigned int n1;

	n1 = n;

	if (n < 0)
	{
		n1 = -n;
		_putchar('-');
	}
	if (n1 / 10 != 0)
	{
		print_number(n1 / 10);
	}
	_putchar((n1 % 10) + '0');
}
