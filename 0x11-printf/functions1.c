#include "main.h"

/**
 * print_char - print characters
 * @args: number to be printed
 * Return: return 1
 */
int print_int(va_list args)
{
	int n = va_arg(args, int);
	int i, temp = n, exp = 1, dig = 0;

	while (temp != 0)
	{
		temp = temp / 10;
		exp = 10 * exp;
		dig++;
	}

	temp = n;

	for (i = 0; i < dig; i++)
	{
		exp = exp / 10;
		_putchar((temp / exp) + '0');
		temp = temp % 10;
	}

	return (dig);
}

/**
 * print_bin - print number in binary form
 * @args: number to be printed in binary form
 * Return: number of printed bits
 */
int print_bin(va_list args)
{
	int n = va_arg(args, int);
	int i, temp = n, exp = 1, bt = 0;

	while (temp != 0)
	{
		temp = temp / 2;
		exp = exp * 2;
		bt++;
	}

	temp = n;

	for (i = 0; i < bt; i++)
	{
		exp = exp / 2;
		_putchar((temp / exp) + '0');
		temp = temp % exp;
	}

	return (bt);
}

