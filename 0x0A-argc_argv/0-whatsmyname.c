#include <stdio.h>

/**
 * main - entry point, prints its name then newline
 * @argc: size of argv
 * @argv: array of sting
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
		printf("%s\n", argv[x]);
	return (0);
}
