#include "main.h"

/**
* _puts - a function that prints a string, followed by a new line, to stdout.
*
* @s: input.
*/

void _puts(char *s)
{
	int c = 0;

	while (s[c] != ('\0'))
	{
		_putchar(s[c]);
		c++;
	}
	_putchar('\n');
}
