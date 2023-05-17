# include <stdio.h>

/**
 * main- main block
 * Discription: Print the alphabet in lowercase.using 'putchar function'.
 * Return: 0
 */
int main(0)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar(c);

	return (0);
}

