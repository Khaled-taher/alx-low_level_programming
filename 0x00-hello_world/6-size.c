#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int inttype;
	char chartype;
	float floattype;
	long int longint;
	long long int longlongint;
        printf("Size of a char: %lu byte(s)\n",sizeof(chartype));
	printf("Size of an int: %lu byte(s)\n",sizeof(inttype));
	printf("size of a long int: %lu byte(s)\n",sizeof(longinttype));
	printf("Size of a long long int: %lu byte(s)\n",sizeof(longlongint));
	printf("Size of a float: %lu byte(s)\n",sizeof(floattype));
	return(0);
}
