#include "main.h"

/**
 * _strlen - change n to 98
 * @s: pointer to int
 * Return: return nothing
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (1)
	{
		if (s[i] == '\0')
			break;
		i = i + 1;
	}
	return (i);
}
