#include <stdio.h>
/**
 * main - Prints the Alphabet in lowercase.
 *
 * Return: 0 on success
 */
int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
