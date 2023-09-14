#include "main.h"

/**
 * print_oct - print characters
 * @args: number to be printed
 * Return: return 1
 */
int print_oct(va_list args, int flg, int width, int precision, __attribute__((unused)) int length)
{
	unsigned long int n = va_arg(args, unsigned int);
	unsigned long int temp = n, exp = 1;
	unsigned long int *ptr = &exp;
	int dig = 0, w = 0, l = 0, sig;
	
	dig = arr_len(temp, ptr, 8);
	
	if (precision > dig)
		l = precision - dig;
	
	if (width > (dig + l))
	{
		if (flg == 21)
		{
			w = print_ledding_char (width - (dig + l) - 1, ' ');
			_putchar('0');
			sig = 1;
		}
		else if (flg == 23)
		{
			_putchar('0');
			sig = 1;
		}
		else if (flg == 22 && precision == -1)
		{
			w = print_ledding_char (width - (dig + l), '0');
		}
		else if (flg == 30 && precision == -1)
			w = print_ledding_char (width - (dig + l), '0');
	}
	
	if (l > 0)
		l = print_ledding_char (l, '0');
	
	dig = print_number(temp, exp, 8, 0);
	
	if (((width > (dig + l))) && (flg == 23))
		w = print_ledding_char (width - (dig + l) - 1 , ' ');
	else if (((width > (dig + l))) && (flg == 40))
		w = print_ledding_char (width - (dig + l), ' ');
	
	va_end(args);
	return (dig + sig + l + w);
}
/**
 * print_hex - print number in binary form
 * @args: number to be printed in binary form
 * Return: number of printed bits
 */
int print_hex(va_list args, int flg, int width, int precision, __attribute__((unused)) int length)
{
        unsigned long int n = va_arg(args, unsigned int);
        unsigned long int temp = n, exp = 1;
        unsigned long int *ptr = &exp;
        int dig = 0, w = 0, l = 0, sig;
	
	dig = arr_len(temp, ptr, 16);

	if (precision > dig)
		l = precision - dig;
	
	if (width > (dig + l))
	{
		if (flg == 21)
		{
			w = print_ledding_char (width - (dig + l) - 2, ' ');
			_putchar('0');
			_putchar('x');
			sig = 2;
		}
		else if (flg == 23)
		{
			_putchar('0');
			_putchar('x');
			sig = 2;
		}
		else if (flg == 22 && precision == -1)
		{
			w = print_ledding_char (width - (dig + l), '0');
			_putchar('x');
			sig = 1;
		}
		else if (flg == 30 && precision == -1)
			w = print_ledding_char (width - (dig + l), '0');
	}
	
	if (l > 0)
		l = print_ledding_char (l, '0');
	
	dig = print_number(temp, exp, 16, 0);
	
	if (((width > (dig + l))) && (flg == 23))
		w = print_ledding_char (width - (dig + l) - 2 , ' ');
	else if (((width > (dig + l))) && (flg == 40))
		w = print_ledding_char (width - (dig + l), ' ');

	va_end(args);
	return (dig + sig + l + w);
}

/**
 * print_HEX - print number in unsigned form
 * @args: number to be printed in unsigned form
 * Return: number of printed digit
 */
int print_HEX(va_list args, int flg, int width, int precision, __attribute__((unused)) int length)
{
	unsigned long int n = va_arg(args, unsigned int);
	unsigned long int temp = n, exp = 1;
	unsigned long int *ptr = &exp;
	int dig = 0, w = 0, l = 0, sig;
	
	dig = arr_len(temp, ptr, 16);
	
	if (precision > dig)
		l = precision - dig;
	
	if (width > (dig + l))
	{
		if (flg == 21)
		{
			w = print_ledding_char (width - (dig + l) - 2, ' ');
			_putchar('0');
			_putchar('x');
			sig = 2;
		}
		else if (flg == 23)
		{
			_putchar('0');
			_putchar('x');
			sig = 2;
		}
		else if (flg == 22 && precision == -1)
		{
			w = print_ledding_char (width - (dig + l), '0');
			_putchar('x');
			sig = 1;
		}
		else if (flg == 30 && precision == -1)
			w = print_ledding_char (width - (dig + l), '0');
	}
	
	if (l > 0)
		l = print_ledding_char (l, '0');
	
	dig = print_number(temp, exp, 16, 1);
	
	if (((width > (dig + l))) && (flg == 23))
		w = print_ledding_char (width - (dig + l) - 2 , ' ');
	else if (((width > (dig + l))) && (flg == 40))
		w = print_ledding_char (width - (dig + l), ' ');

	va_end(args);
	return (dig + sig + l + w);
}

