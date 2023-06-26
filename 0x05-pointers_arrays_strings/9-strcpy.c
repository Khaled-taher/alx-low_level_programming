#include "main.h"

/**
 * _strcpy - print a string
 * @dest: pointer to string
 * @src: pointer to string
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i, j;

	i = strlen(src);

	for (j = 0; j <= i; j++)
		dest[j] = src[j];
	return (dest);
}
