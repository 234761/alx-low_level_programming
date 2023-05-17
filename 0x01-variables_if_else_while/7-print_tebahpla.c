#include <stdio.h>

/**
 * main - main block
 * Discription: prints the lowercase alphabet in reverse
 * Return: 0
 */
int main(void)	
{
	char j;

	for (j = 'z'; j >= 'a'; j--)
	{
		putchar(j);
	}
	putchar('\n');

	return (0);
}
