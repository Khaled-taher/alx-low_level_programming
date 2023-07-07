#include "main.h"

/**
 * main - check the code
 * @argc: number of arguments
 * @argv:pointer to array of pointers
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i, j, l, weight, num, result = 0;

	for (i = 1; i < argc; i++)
	{
		weight = 1;
		num = 0;
		l = strlen(argv[i]);

		for (j = l - 1; j >= 0; j--)
		{
			if (argv[i][j] >= '0' && argv[i][j] <= '9')
			{
				num = weight * (argv[i][j] - '0') + num;
				weight = weight * 10;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}

		result = result + num;
	}

	printf("%d\n", result);
	return (0);
}
