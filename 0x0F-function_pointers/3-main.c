#include "3-calc.h"
/**
 * main - a program that performs simple operations
 * @ac: number of arguments
 * @av: array of arguments
 * Return: Always 0 (Success)
 */
int main(int ac, char *av[])
{
	int a1, a2, result;
	char op;
	int (*func)(int, int);

		if (ac != 4)
		{
			printf("Error\n");
			exit(98);
		}
	a1 = atoi(av[1]);
	a2 = atoi(av[3]);

	func = get_op_func(av[2]);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}
	op = *av[2];
	if ((op == '/' || op == '%') && a1 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = func(a1, a2);

	printf("%d\n", result);
	return (0);
}
