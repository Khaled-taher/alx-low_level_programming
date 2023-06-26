#include "main.h"

/**
 * swap_int - change n to 98
 * @a: pointer to int
 * @b: pointer to int
 * Return: return nothing
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
