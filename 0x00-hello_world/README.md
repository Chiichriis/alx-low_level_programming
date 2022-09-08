Contains Scripts for Beginner C progrming ALX Tasks

Task 0 
Write a script that runs a C file through the preprocessor and save the result into another file.
The C file name will be saved in the variable $CFILE
The output should be saved in the file c

#!/bin/bash
gcc $CFILE -E -o c
----------------------------------------------------

Task 1
Write a script that compiles a C file but does not link.
The C file name will be saved in the variable $CFILE
The output file should be named the same as the C file, but with the extension .o instead of .c.
Example: if the C file is main.c, the output file should be main.o

#!/bin/bash
gcc -c $CFILE
------------------------------------------------------

Task 2
Write a script that generates the assembly code of a C code and save it in an output file.
The C file name will be saved in the variable $CFILE
The output file should be named the same as the C file, but with the extension .s instead of .c.
Example: if the C file is main.c, the output file should be main.s

#!/bin/bash
gcc -S $CFILE
-----------------------------------------------------

Task 3
Write a script that compiles a C file and creates an executable named cisfun.
The C file name will be saved in the variable $CFILE

#!/bin/bash
gcc $CFILE -o cisfun
----------------------------------------------------

Task 4
Write a C program that prints exactly "Programming is like building a multilingual puzzle, followed by a new line.
Use the function puts
You are not allowed to use printf
Your program should end with the value 0

#include <stdio.h>
/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	puts("\"Programming is like building a multilingual puzzle");
	return (0);
}
-----------------------------------------------------------

Task 5
Write a C program that prints exactly with proper grammar, but the outcome is a piece of art,, followed by a new line.
Use the function printf
You are not allowed to use the function puts
Your program should return 0
Your program should compile without warning when using the -Wall gcc option

#include <stdio.h>
/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	printf("with proper grammar, but the outcome is a piece of art,\n");
	return (0);
}
----------------------------------------------------------

Task 6
Write a C program that prints the size of various types on the computer it is compiled and run on.
You should produce the exact same output as in the example
Warnings are allowed
Your program should return 0
You might have to install the package libc6-dev-i386 on your Linux to test the -m32 gcc option

#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
-------------------------------------------------------

Task 7(optional)
Write a script that generates the assembly code (Intel syntax) of a C code and save it in an output file.
The C file name will be saved in the variable $CFILE.
The output file should be named the same as the C file, but with the extension .s instead of .c.
Example: if the C file is main.c, the output file should be main.s

#!/bin/bash
gcc -S -masm=intel $CFILE
------------------------------------------------------

Task 8(optional)
Write a C program that prints exactly and that piece of art is useful" - Dora Korpar, 2015-10-19, followed by a new line, to the standard errorYou are not allowed to use any functions listed in the NAME section of the man (3) printf or man (3) puts
Your program should return 1
Your program should compile without any warnings when using the -Wall gcc option

#include <stdio.h>
#include <unistd.h>
/**
 * main - Prints out the last part of a quote in the standard error.
 * Return: 1 if success.
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
-------------------------------------------------------
