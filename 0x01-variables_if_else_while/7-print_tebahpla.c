#include <stdio.h>

/**
 * main - main block
 * Discription: prints the lowercase alphabet in reverse
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z') 
	{
		putchar(c);
		c--;
	}
	putchar('\n');

	return (0);
}
		



