#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
* sum_them_all - a function that returns the sum of all its parameters.
* @n: number of arguments
* Return: sumof arguments
*/
int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	va_list list;

	va_start(list, n);
	for (i = 0, sum = 0; i < n; i++)
		sum += va_arg(list, int);

	va_end(list);
	return (sum);
}
