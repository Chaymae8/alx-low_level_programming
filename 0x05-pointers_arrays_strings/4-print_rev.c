#include "main.h"

/**
* print_rev - a function that prints a string in reverse.
*
* @s: input.
*/

void print_rev(char *s)
{
	int c = 0;

	while (s[c] != ('\0'))
	{
		c++;
	}
	c = c - 1;
	while (c >= 0)
	{
		putchar(s[c]);
		c--;
	}
	putchar('\n');
}
