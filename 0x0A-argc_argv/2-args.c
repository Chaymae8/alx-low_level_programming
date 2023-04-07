#include "main.h"
#include <stdio.h>
/**
* main - a program that prints all arguments it receives.
* @argc: number of arguments in argv
* @argv: array of strings (arguments)
* Return: 0
*/

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		(void) argc;
		printf("%s\n", argv[i]);
	}
	return (0);
}
