#include "main.h"

/**
 * get_width- converts a string to an integer
 * @str: string to get width from
 * Return: width value
 */
int get_width(const char *str)
{
	unsigned int number = 0;
	int i = 0;

	while (*str)
	{
		if (*str >= '1' && *str <= '9')
		{
			number = number * 10 + (*str - '0');
			str++;
			continue;
		}
		else if (number > 0)
			break;
		else if  (*str == '.')
			return (0);
		i++;
		str++;

		if (i  > 2)
			return (0);
	}
	return (number);
}

/**
 * get_precision- converts a string to an integer
 * @str: string to get precision from
 * Return: precision value
 */
int get_precision(const char *str)
{
	unsigned int number = 0;
	int i = 0, r = 0;

	while (str[i] != '\0')
	{
		if (str[i] == '.')
		{
			number = get_width(str + i + 1);
			return (number);
		}
		else if (!(str[i - 1] >= '0' && str[i - 1] <= '9'))
		{
			i++;
			r++;
			if (r > 3)
				return (-1);
			continue;
		}
		else 
			i++;
	}
	return (-1);
}
