#include "main.h"

/**
 * _printf - print the inputs to stdout
 * @format: the format of input to specify who to print the input
 * Return: return zero
 */
int _printf(const char *format, ...)
{
	int i = 0, len = 0, scape = 0, flg = 0, width = 0, precision = -1;
	int *p;
	va_list args;
	int (*op_func)(va_list, int, int, int, int);

	va_start(args, format);

	if (format == NULL
			|| format[0] == '\0' ||
			(format[0] == '%' && format[1] == '\0'))
	{
		_printf("nils\n");
		return (-1);
	}

	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			len++;
			i++;
		}
		else
		{
			flg = get_flag(format + i + 1);
			width = get_width(format + i + 1);
			precision = get_precision(format + i + 1);
			p = &scape;
			op_func = get_function(format + i + 1, p);
			if (op_func == NULL)
			{
				while (i--)
				{
					_putchar(8);
					return (-1);
				}
			}
			len =  len + op_func(args, flg, width, precision, 0);
			i = i + 2 + scape;
		}
	}
	va_end(args);
	return (len);

}
