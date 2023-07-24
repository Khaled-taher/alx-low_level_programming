#include "main.h"

/**
 * _printf - print the inputs to stdout
 * @format: the format of input to specify who to print the input
 * Return: return zero
 */
int _printf(const char *format, ...)
{
	int i = 0, len = 0;
	va_list args;
	int (*op_func)(va_list);

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
			op_func = get_function(format[i + 1]);
			len =  len + op_func(args);
			i = i + 2;
		}
	}
	va_end(args);
	return (len);

}
