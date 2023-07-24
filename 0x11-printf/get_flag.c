#include "main.h"

/**
 * get_flag - get the right function to be run
 * @c: char to take decision depend on it
 * Return: return pointer to function
 */
int (*get_flag(char *str))(va_list)
{
	op_t op1[] = {
		{"0#",  print_char},
		{"-#", print_str},
		{"0+", print_perc},
		{"0 ", print_int},
		{"+-", print_int},
		{"- ", print_bin},
		{NULL, NULL}
	};
op_t op2[] = {
		{"0",  print_char},
		{"+", print_str},
		{" ", print_perc},
		{"-", print_int},
		{"#", print_int},
		{NULL, NULL}
	};

	int i = 0;

	while (op1[i].s != NULL)
	{
		if ((op1[i].s[0] == str[0] && op1[i].s[1] == str[1]) ||
		(op1[i].s[1] == str[0] && op1[i].s[0] == str[1]))
			return (op1[i].f);
			
		i++;
	}
	while (op2[i].s != NULL)
	{
		if (op2[i].s[0] == str[0])
			return (op[i].f);

		i++;
	}
	return (NULL);
}
