#include "function_pointers.h"

/**
* array_iterator - executes a function
* @array: the array
* @size: size of the array
* @action: is a pointer to the function you need to use
* return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;
	i = 0;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
