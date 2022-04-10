#include <stdio.h>

/**
 * main - prints is posetive, negative
 * or zero
 * Return: returns zero if program exits well.
 */
int main(void)
{
	char base
		;
	for (base = '0'; base <= '9'; base++)
	{
		putchar(base);
	}
	for (base = 'a'; base <= 'f'; base++)
	{
		putchar(base);
	}
	putchar('\n');
	return (0);
}
