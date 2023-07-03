#include "main.h"

/**
 * print_chessboard - concatinate to strings
 * @a: pointer to array
 * Return: nothing
 */
void print_chessboard(char (*a)[8])
{
	int i, j, l;

	l = sizeof(a);

	for (i = 0; i < l; i++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[i][j]);
		_putchar('\n');
	}
}
