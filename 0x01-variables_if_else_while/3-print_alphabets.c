#include <stdio.h>
/**
 * main - prints lowercase then uppercase of alphabet
 *
 * Return: 0 on success
 */
int main(void)
{
	char x = 'a';
	char X = 'A';

	while (x <= 'z' && X <= 'Z')
	{
		putchar(x);
		putchar(X);
		x++;
		X++;
	}
	putchar('\n');
	return (0);
}
