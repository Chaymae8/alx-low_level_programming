#include <stdlib.h>
#include <stdio.h>
/**
* main - a program that prints the number of arguments passed into it.
*  @argc: The number of command line arguments
*  @argv: the array that contains the program command line arguments
* Return: 0
*/
int main(int argc, char *argv[])
{
	(void) argv;/*Ignor argv*/
		printf("%d\n", argc);
		return (0);
}
