#include <stdio.h>

/**
 * main - main block
 * Discription: prints alphabet in lowercase, then in uppercase.
 * Return: 0
 */
int main(void)
{
	char lower_case;
	char upper_case;

	for (lower_case = 'a'; lower_case <= 'z'; lower_case++)
	{
	putchar(lower_case);
	}

	for (upper_case = 'A'; upper_case <= 'Z'; upper_case++)
	{
	putchar(upper_case);
	}
	putchar('\n');

	return (0);
}
