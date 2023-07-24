#include "main.h"

/**
 * p_HEX - print number in hexadecemal form
 * @n: number to be printed
 * Return: nothing
 */
void p_HEX(unsigned long int n)
{
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

}

#include "main.h"

/**
 * p_hex - print number in hexadecemal form
 * @n: number to be printed
 * Return: nothing
 */
int p_hex(unsigned long int n)
{
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
