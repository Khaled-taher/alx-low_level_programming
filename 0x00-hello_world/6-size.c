#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of an int: %d byte(s)\n",sizeof(inttype));
	printf("size of a long int: %d byte(s)\n",sizeof(longinttype));
	printf("Size of a long long int: %d byte(s)\n",sizeof(longlongint));
	printf("Size of a float: %d byte(s)\n",sizeof(floattype));
	return(0);
}
