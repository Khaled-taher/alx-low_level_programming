#include "main.h"

/**
 * string_toupper - change lower case to upper
 * @a: pointer to string
 * Return: return nothing
 */
char *string_toupper(char *a)
{
	int i;

	i = 0;

	while (a[i])
	{
		if (a[i] >= 97 && a[i] <= 122)
			a[i] = a[i] - 32;
		i = i + 1;
	}

	return (a);
}
