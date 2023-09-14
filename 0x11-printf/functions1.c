#include "main.h"

/**
 * print_int - print characters
 * @args: number to be printed
 * Return: return 1
 */
int print_int(va_list args, int flg, int width, int precision, __attribute__((unused)) int length)
{
	int n = va_arg(args, int);
	int temp, dig = 0, sig = 0, l = 0, minus = 0, w = 0;
	unsigned long int exp;
	unsigned long int *ptr = &exp;

	if (n < 0)
	{
		temp = n * -1;
		minus = 1;
	}

	dig = arr_len(temp, ptr, 10);

	if (precision > dig)
		l = precision - dig;

	if (width > (dig + l))
	{
		if (flg == (11 || 1))
			w = print_ledding_char (width - (dig + l) - 1, ' ');
		else if ((flg == (12 || 2)) && (precision == -1))
			w = print_ledding_char (width - (dig + l) - 1, '0');
	}
	sig = print_sign(flg, minus);

	if (l > 0)
		l = print_ledding_char (l, '0');

	dig = print_number(temp, exp, 10, 0);

	if (((width > (dig + l))) && (flg == (13 || 3 || 40)))
		w = print_ledding_char (width - (dig + l) - 1, ' ');

	va_end(args);
	return (dig + sig + l + w);
}

/**
 * print_bin - print number in binary form
 * @args: number to be printed in binary form
 * Return: number of printed bits
 */
int print_bin(va_list args, __attribute__((unused)) int flg, __attribute__((unused)) int width,
		__attribute__((unused)) int precision, __attribute__((unused)) int length)
{
	unsigned long int n = va_arg(args, unsigned int);
	unsigned long int temp = n, i, exp = 1, bt = 0;

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

	va_end(args);
	return (bt);
}

/**
 * print_unsig - print number in unsigned form
 * @args: number to be printed in unsigned form
 * Return: number of printed digit
 */
int print_unsig(va_list args, int flg, int width, int precision, __attribute__((unused)) int length)
{
	unsigned long int n = va_arg(args, unsigned int);
	unsigned long int temp = n, exp = 1;
	unsigned long int *ptr = &exp;
	int dig = 0, w = 0, l = 0, sig;

	dig = arr_len(temp, ptr, 10);
	
	if (precision > dig)
		l = precision - dig;
	
	if (width > (dig + l))
	{
		if (flg == (11 || 1))
			w = print_ledding_char (width - (dig + l) - 1, ' ');
		else if ((flg == (12 || 2)) && (precision == -1))
			w = print_ledding_char (width - (dig + l) - 1, '0');
	}
	sig = print_sign(flg, 0);

	if (l > 0)
		l = print_ledding_char (l, '0');
	
	dig = print_number(temp, exp, 10, 0);
	
	if (((width > (dig + l))) && (flg == (13 || 3 || 40)))
		w = print_ledding_char (width - (dig + l) - 1, ' ');
	
	va_end(args);
	return (dig + sig + l + w);
}
