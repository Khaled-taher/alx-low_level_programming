#include "main.h"

/**
 * print_char - print characters
 * @args: char to be printed
 * Return: return 1
 */
int print_char(va_list args)
{
	char c;

	c = va_arg(args, int);
	_putchar(c);
	va_end(args);
	return (1);
}

/**
 * print_str - print strings
 * @args: pointer to string to be printed
 * Return: number of printed charcter
 */
int print_str(va_list args)
{
	int i, len =  0;
	char *str;

	str = va_arg(args, char *);

	while (str[len] != '\0')
		len++;

	for (i = 0; i < len; i++)
		_putchar(str[i]);

	va_end(args);
	return (len);
}

/**
 * print_perc - print percentage mark
 *
 * Return: return 1
 */
int print_perc(void)
{
	_putchar('%');
	return (1);
}
