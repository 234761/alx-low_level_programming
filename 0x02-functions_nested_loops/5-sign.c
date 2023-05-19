#include "main.h"

/**
 * main- entry point
 *
 * Return: 0 1 -1
 */
int print_sign(int n);
{
	if (n > 0)
		printf("%d is greater than zero\n", n);
	return (1);
	else if (n < 0)
		printf("%d is less than zero\n", n);
	return (-1);
	else 
		printf("% is zero\n", n);
	return (0);
}
