#include <stdio.h>

/**
 * main - prints is posetive, negative
 * or zero
 * Return: returns zero if program exits well.
 */
int main(void)
{
	char c = 'a';
	char e, q;

	while (c <= 'z')
	{
	if (c != e && c != q)
	{
		putchar(c);
	}
		c++;
	}
	putchar('\n');
	return (0);
}
