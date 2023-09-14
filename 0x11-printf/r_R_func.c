#include "main.h"

/**
 * print_rev - print reversed string
 * @args: pointer to string to be printed
 * Return: return 1
 */
int print_rev(va_list args, __attribute__((unused)) int flg, __attribute__((unused)) int width,
		__attribute__((unused)) int precision, __attribute__((unused)) int length)
{
	int i, len = 0;
	char *str;

	str = va_arg(args, char *);

	while (str[len] != '\0')
		len++;

	for(i = 0; i < len; i++)
		_putchar(str[len - i - 1]);

	va_end(args);
	return (len);
}

/**
 * print_rot13 - print strings in rot13 encryption form
 * @args: pointer to string to be printed
 * Return: number of printed charcter
 */
int print_rot13(va_list args, __attribute__((unused)) int flg, __attribute__((unused)) int width,
		__attribute__((unused)) int precision, __attribute__((unused)) int length)
{
	int i, len =  0;
	char *str;

	str = va_arg(args, char *);

	while (str[len] != '\0')
		len++;

	for (i = 0; i < len; i++)
	{
		if ((str[i] >= 'a' && str[i] <= 'm') || (str[i] >= 'A' && str[i] <= 'M'))
		{
			_putchar(str[i] + 13);
		}
		
		else if ((str[i] >= 'n' && str[i] <= 'z') || (str[i] >= 'N' && str[i] <= 'Z'))
		{
			_putchar(str[i] - 13);
		}

		else
		{
			_putchar(str[i]);
		}
	}

	va_end(args);
	return (len);
}
