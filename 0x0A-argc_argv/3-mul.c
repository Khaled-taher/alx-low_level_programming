#include "main.h"

/**
 * str_to_int - check the code
 * @s: number of arguments
 * Return: Always 0.
 */
int str_to_int(char *s)
{
	int j, l, weight, num;

	weight = 1;
	num = 0;
	l = strlen(s);

	for (j = l - 1; j >= 0; j--)
	{
		if (s[j] >= '0' && s[j] <= '9')
		{
			num = weight * (s[j] - '0') + num;
			weight = weight * 10;
		}
	}
	return (num);
}

/**
 * main - check the code
 * @argc: number of arguments
 * @argv:pointer to array of pointers
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int a, b, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a = str_to_int(argv[1]);
	b = str_to_int(argv[2]);
	result = a * b;

	printf("%d\n", result);
	return (0);
}
