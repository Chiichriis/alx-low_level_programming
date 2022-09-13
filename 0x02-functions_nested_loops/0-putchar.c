#include <stdio.h>
/**
 * main - prints _putchar then new line.
 * Return: 0 on success
 */
int main(void)
{
	char temp[] = "_putchar";
	int i = 0;

	while (temp[i] != '\0')
	{
		putchar(temp[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
