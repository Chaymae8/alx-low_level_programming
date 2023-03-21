#include "main.h"

/**
 * main - print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char n;
	int i;

	i = 0;

	while (i < 10)
	{
		n = 'a';
		while (n <= 'z')
		{
			_putchar(n);
			n++;
		}
		_putchar('\n');
		i++;
	}
}

