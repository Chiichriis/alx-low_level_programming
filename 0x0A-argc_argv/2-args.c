#include <stdio.h>

/**
 * main - entry point. prints argument
 * @argc: size of argv
 * @argv: array of char
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
