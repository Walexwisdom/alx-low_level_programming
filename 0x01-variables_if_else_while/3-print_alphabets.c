#include <stdio.h>

/**
 * main - prints is posetive, negative
 * or zero
 * Return: returns zero if program exits well.
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	char C = 'A';

	while (C <= 'Z')
	{
		putchar(C);
		c++;
	}
	putchar('\n');
	return (0);
}
