#include <stdio.h>

/**
 * main - entry point. prints num of arguments passed into it
 * @argc: size of argv
 * @argv: array of sting
 *
 * Return: 0
 */

int main(int argc, char *argv[]__attribute__((unused)))
{
	if (argc > 0)
		printf("%d\n", argc - 1);
	return (0);
}
