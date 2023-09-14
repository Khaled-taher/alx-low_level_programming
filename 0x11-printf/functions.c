#include "main.h"

/**
 * print_char - print characters
 * @args: char to be printed
 * Return: return 1
 */
int print_char(va_list args, int flg, int width, __attribute__((unused)) int precision, __attribute__((unused)) int length)
{
	int l = 0;
	char c;

	c = va_arg(args, int);

	if (width > 0 && flg == 0)
		l = print_ledding_char(width - 1, ' ');

	_putchar(c);

	if (width > 0 && flg == 40)
		l = print_ledding_char(width - 1, ' ');

	va_end(args);
	return (1 + l);
}

/**
 * print_str - print strings
 * @args: pointer to string to be printed
 * Return: number of printed charcter
 */
int print_str(va_list args, int flg, int width, __attribute__((unused)) int precision, __attribute__((unused)) int length)
{
	int i, len =  0, l = 0;
	char *str;

	str = va_arg(args, char *);

	while (str[len] != '\0')
		len++;

	if (precision < len && precision != -1)
		len = precision;

	if (width > len && flg == 0)
		l = print_ledding_char(width - len, ' ');
	
	for (i = 0; i < len; i++)
		_putchar(str[i]);

	if (width > len && flg == 40)
		l = print_ledding_char(width - len, ' ');
	va_end(args);
	return (len +  l);
}

/**
 * print_perc - print percentage mark
 *
 * Return: return 1
 */
int print_mark(__attribute__((unused)) va_list args, __attribute__((unused)) int flg, __attribute__((unused)) int width,
		__attribute__((unused)) int precision, __attribute__((unused)) int length)
{
	_putchar('%');
	return (1);
}
