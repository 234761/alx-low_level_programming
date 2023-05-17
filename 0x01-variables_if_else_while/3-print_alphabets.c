#include <stdio.h>

/**
 * main - main block
 * Discription: prints alphabet in lowercase, then in uppercase.
 * Return: 0
 */
int main(void)
{
	char c = 'a', C = 'A'

	while (c <= 'z', C <= 'Z')
	{
		putchar(c);
		c++;
		putchar(C);
		c++;
	}
	putchar('\n');

	return (0);
}
		
