#include "main.h"

/**
* swap_int - swaps the values of two integers
*
* @a: first number
* @b: second number
*/

void swap_int(int *a, int *b)
{
	int i = 0;

	i = *a;
	*a = *b;
	*b = i;
}

