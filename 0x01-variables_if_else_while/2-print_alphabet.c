# include <stdio.h>

/**
 * main- main block
 * Discription: Print the alphabet in lowercase.using 'putchar function'.
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}



