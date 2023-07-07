#include "main.h"

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

	a = *argv[1] - '0';
	b = *argv[2] - '0';
	result = a * b;

	printf("%d\n", result);
	return (0);
}
