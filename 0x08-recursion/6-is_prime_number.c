#include "main.h"

/**
 * divide_num - concatinate to strings
 * @n: scource taht will be cdivide_num
 * @i: number to divide by
 * Return: pointer to destination
 */
int divide_num(int n, int i)
{
	if (n > i)
	{
		if (n % i == 0)
			return (0);
		else
			return (divide_num(n, i + 1));
	}
	else
		return (1);
}
/**
 * is_prime_number - concatinate to strings
 * @n: scource taht will be concatinated
 * Return: pointer to destination
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (divide_num(n, 2));
}
