#include <stdio.h>
/**
 * main - prints all num of base 16 lowcase.
 *
 * Return: 0 success
 */
int main(void)
{
	int i;
	char x;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	for (x = 'a'; x <= 'f'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
