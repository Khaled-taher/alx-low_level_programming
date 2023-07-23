#include "main.h"

/**
 * print_char - print characters
 * @c: char to be printed
 * Return: return 1
 */
int print_char(va_list args)
{
	char c;

	c = va_arg(args, int);
	_putchar(c);
	return (1);
}

/**
 * print_string - print strings
 * @str: pointer to string to be printed
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

	return (len);
}

/**
 * print_prec - print percentage mark
 * @c: char to be printed
 * Return: return 1
 */
int print_perc(void)
{
	_putchar('%');
	return(1);
}
