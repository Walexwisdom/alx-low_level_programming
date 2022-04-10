#include <stdio.h>

/**
 * main - prints is posetive, negative
 * or zero
 * Return: returns zero if program exits well.
 */
int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		putchar(48 + num);
		num = num + 1;
	}
	putchar('\n');
	return (0);
}
