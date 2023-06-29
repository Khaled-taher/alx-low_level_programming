#include "main.h"

/**
 * reverse_array - change n to 98
 * @a: pointer to int array
 * @n: number of member
 * Return: return nothing
 */
void reverse_array(int *a, int n)
{
	int i, dump;

	for (i = 0; i < n ; i++, n--)
	{
		dump = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = dump;
	}
}
