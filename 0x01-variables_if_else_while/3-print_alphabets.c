#include <stdio.h>
/**
 * main - prints lowercase then uppercase of alphabet
 *
 * Return: 0 on success
 */
int main(void)
{
	char c;
	char C;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (C = 'A'; C <= 'Z'; C++)
		putchar(C);
	putchar('\n');
	return (0);
}
