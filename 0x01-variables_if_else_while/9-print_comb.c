#include <stdio.h>
/**
 * main - prints all possibe combinations of,
 * single-digit numbers.
 *
 * Return: 0 on success
 */
int main(void)
{
	int n;

	n = 48; /*48 corresponds with ASCII character 0*/

	while (n <= 57) /*57 corresponds with ASCII character 9*/
	{
		putchar (n);
		if (n != 57)
		{
			putchar (',');
			putchar (' ');
		}
		n++;
	}
	putchar ('\n');
	return (0);
}
