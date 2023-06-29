#include "main.h"

/**
 * _strncat - concatinate to strings
 * @dest: destination to concatinate after
 * @src: scource taht will be concatinated
 * @n: number of bytes to be concatinate
 * Return: pointer to destination
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, k;

	i = strlen(dest);

	for (k = 0; k < n && src[k] != '\0'; k++)
		dest[i + k] = src[k];
	dest[i+k] = '\0';

	return (dest);
}

