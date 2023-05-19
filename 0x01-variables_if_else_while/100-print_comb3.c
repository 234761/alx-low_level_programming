#include <stdio.h>

/**
 * main - main block
 *
 * Return: 0
 */
int main(void)
{
	int i, j, k;

	i = 0;

	while (i < 100)
	{
	j = i % 10;
	k = i / 10;
	if (j < k)
	{
	putchar(i + '0');
	putchar(i + '0');
	}
	if (i < 89)
	{
	putchar(',');
	putchar(' ');
	}
	i++;
	}
	putchar('\n');

	return (0);
}	
