#include "main.h"

/**
 * print_oct - print characters
 * @args: number to be printed
 * Return: return 1
 */
int print_oct(va_list args)
{
	unsigned long int n = va_arg(args, int);
	unsigned long int i, temp = n, exp = 1, dig = 0;

	while (temp != 0)
	{
		temp = temp / 8;
		exp = 8 * exp;
		dig++;
	}

	temp = n;

	for (i = 0; i < dig; i++)
	{
		exp = exp / 8;
		_putchar((temp / exp) + '0');
		temp = temp % exp;
	}

	return (dig);
}

/**
 * print_hex - print number in binary form
 * @args: number to be printed in binary form
 * Return: number of printed bits
 */
int print_hex(va_list args)
{
	unsigned long int n = va_arg(args, unsigned  int);
	unsigned long int i, temp = n, exp = 1, bt = 0;
	int hex_dig = 0;

	while (temp != 0)
	{
		temp = temp / 16;
		exp = exp * 16;
		bt++;
	}

	temp = n;

	for (i = 0; i < bt; i++)
	{
		exp = exp / 16;
		hex_dig = temp / exp;

		if (hex_dig > 9)
			_putchar(hex_dig + '0' + 39);
		else
			_putchar(hex_dig + '0');

		temp = temp % exp;
	}

	return (bt);
}

/**
 * print_HEX - print number in unsigned form
 * @args: number to be printed in unsigned form
 * Return: number of printed digit
 */
int print_HEX(va_list args)
{
	unsigned long int n = va_arg(args, unsigned int);
	unsigned long int i, temp = n, exp = 1, bt = 0;
	int hex_dig = 0;

	while (temp != 0)
	{
		temp = temp / 16;
		exp = exp * 16;
		bt++;
	}

	temp = n;

	for (i = 0; i < bt; i++)
	{
		exp = exp / 16;
		hex_dig = temp / exp;

		if (hex_dig > 9)
			_putchar(hex_dig + '0' + 7);
		else
			_putchar(hex_dig + '0');

		temp = temp % exp;
	}

	return (bt);
}
