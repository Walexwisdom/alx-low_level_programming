#include <stdio.h>
#include <unistd.h>

/**
* main - prints is posetive, negative
* or zero
* Return: returns zero if program exits well.
*/
void print_alphabet(void);
print_alphabet(void)
{
	char alp = 'a';

	while (alp <= 'z')
	{
		putchar(alp);
		alp++;
	}
	putchar('\n');
	return (alp);
}
int main(void)
{
	void print_alphabet(void);
	return (0);
}
