#include <stdio.h>
/**
 * main - print lowercase alphabet except q and e.
 *
 * Return: 0 on success
 */
int main(void)
{
	char p;

	for (p = 'a'; p <= 'z'; p++)
	{
		if (p != 'q' && p != 'e')
			putchar(p);
	}
	putchar('\n');
	return (0);
}
