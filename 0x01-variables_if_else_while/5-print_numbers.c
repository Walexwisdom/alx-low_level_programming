#include <stdio.h>

/**
 * main - prints is posetive, negative
 * or zero
 * Return: returns zero if program exits well.
 */
int main(void)
{
	char a = 0;

	while (a <= 9)
	{
		putchar(a);
		 a = a + 1;
	}
	putchar('\n');
	return (0);
}
