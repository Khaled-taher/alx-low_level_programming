#include "main.h"

/**
 * _strcat - concatinate to strings
 * @dest: destination to concatinate after
 * @src: scource taht will be concatinated
 * Return: pointer to destination
 */
char *_strcat(char *dest, char *src)
{
	int i, j, k;

	i = strlen(dest);
	j = strlen(src);

	for (k = 0; k < j; k++)
		dest[i + k] = src[k];

	return (dest);
}
