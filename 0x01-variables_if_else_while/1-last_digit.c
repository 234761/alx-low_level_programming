#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - main block
 * This program will assign a random number to the variable n
 * and is greater than 5, is 0 and is less than 6 and not 0
 * Return: Always 0 (Success)
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
	{
		printf("%i Last digit of n is:\n" and is greater than 5);
	}
	else if (0 != n < 6)
	{
		printf("%i Last digit of n is:\n" and is less than 6 and not 0);
	}
	else 
	{
		printf("%i Last digit of n is:\n" and is 0);
	}
	return (0);
}
