#include <stdlib.h>
#include <stdio.h>
/**
* main - a program that prints its name, followed by a new line.
* @argc: The number of command line arguments
* @argv: the array that contains the program command line arguments
* Return: 0
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
