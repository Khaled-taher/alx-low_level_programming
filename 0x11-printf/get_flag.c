#include "main.h"

/**
 * get_flag - get the flag function to be run
 * @str: char to take decision depend on it
 * Return: return pointer to function
 */
int get_flag(const char *str)
{
	flg_t op1[] = {
		{"0#", 21},
		{"-#", 22},
		{"0+", 1},
		{"0 ", 11},
		{"+-", 2},
		{"- ", 12},
		{NULL, 0}
	};
	flg_t op2[] = {
		{"0", 30},
		{"+", 0},
		{" ", 10},
		{"-", 40},
		{"#", 20},
		{NULL, 0}
	};

	int i = 0;

	while (op1[i].s != NULL)
	{
		if ((op1[i].s[0] == str[0] && op1[i].s[1] == str[1]) ||
		(op1[i].s[1] == str[0] && op1[i].s[0] == str[1]))
			return (op1[i].n);
		i++;
	}
	while (op2[i].s != NULL)
	{
		if (op2[i].s[0] == str[0])
			return (op2[i].n);

		i++;
	}
	return (0);
}
