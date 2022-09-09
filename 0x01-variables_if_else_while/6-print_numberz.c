#include <stdio.h>
/**
 * main - prints from 0-9 without using char or printf/puts,
 * and putchar 2x max
 *
 * Return: 0 on success
 */
int main(void)
{
	int j = '0';

	while (j <= '9')
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}
