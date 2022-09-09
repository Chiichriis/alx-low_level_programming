#include <stdio.h>

/**
* main - loop through variables a,b,c printing digits,
* output like 00 01, 00 02, 00 03, ..., 97 98, 97 99, 98 99
*
* Return: print to stdout all possible different combinations of three digits
**/
int main(void)
{
	int a = 0;
	int b;

	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			putchar(a / 10 % 10 + '0');
			putchar(a % 10 + '0');
			putchar(' ');
			putchar(b / 10 % 10 + '0');
			putchar(b % 10 + '0');
			if (a == 98 && b == 99)
			{
				putchar('\n');
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
			b++;
		}
		a++;
	}
return (0);
}
