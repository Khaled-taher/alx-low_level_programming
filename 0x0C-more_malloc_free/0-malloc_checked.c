#include "main.h"

/**
 * malloc_checked - concatinate to strings
 * @b: scource taht will be concatinated
 * Return: pointer to destination
 */
void *malloc_checked(unsigned int b)
{
	char *str;

	str = malloc(b);

	if (str == NULL)
		exit(98);

	return (str);
}
