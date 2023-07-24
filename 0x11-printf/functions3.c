#include "main.h"

/**
 * print_STR - print strings and print non printing char in hexa
 * @args: pointer to string to be printed
 * Return: number of printed charcter
 */
int print_STR(va_list args)
{
	int i, len =  0, extra = 0;
	char *str;

	str = va_arg(args, char *);

	while (str[len] != '\0')
		len++;

	for (i = 0; i < len; i++)
	{
		if ((str[i] < 32) || (str[i] >= 127))
		{
			_putchar('\\');
			_putchar('x');
			if (str[i] < 16)
				_putchar('0');
			p_HEX(str[i]);
			extra = extra + 3;
			continue;
		}
		_putchar(str[i]);
	}

	va_end(args);
	return (len + extra);
}

/**
 * print_ptr - print pointer address
 * @args: pointer to be printed
 * Return: return number of printed charcters
 */
int print_ptr(va_list args)
{
	int len;
	unsigned long int p = (unsigned long int)va_arg(args, void *);

	_putchar('0');
	_putchar('x');
	len = p_hex(p);

	va_end(args);
	return (len + 2);
}
