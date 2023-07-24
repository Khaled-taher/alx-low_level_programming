#include "main.h"

/**
 * get_width- converts a string to an integer
 * @str: string to convert
 * Return: integer value of string
 */
int	get_width(const char *str)
{
	unsigned int number = 0;

	while (*s)
	{
	     if (*str >= '0' && *str <= '9')
			number = number * 10 + (*str - '0');
		else if (number > 0)
			break;
			else if  (*str == '.')
			return (0);
		str++;
	}
	return (number);
}

/**
 * get_precision- converts a string to an integer
 * @str: string to convert
 * Return: integer value of string
 */
int	get_precision(const char *str)
{
	unsigned int number = 0;

	while (*str)
	{
	     if (*str == '.')
	     {
	     str++
	     number = get_width;
	     return (number);
	     }
		str++;
	}
	return (0);
}
