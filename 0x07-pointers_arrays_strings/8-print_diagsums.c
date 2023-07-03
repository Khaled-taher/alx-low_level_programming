#include "main.h"

/**
 * print_diagsums - concatinate to strings
 * @a: pointer to array
 * @size: size of array
 * Return: pointer to s
 */
void print_diagsums(int *a, int size)
{
	int i, s1 = 0, s2 = 0, t_size;

	t_size = size * size;

	for (i = 0; i < t_size; i = i + size + 1)
		s1 = s1 + a[i];

	for (i = 1; i <= size; i++)
		s2 = s2 + a[i * (size - 1)];
	printf("%d, %d\n", s1, s2);
}
