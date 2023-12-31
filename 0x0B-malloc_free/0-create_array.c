#include "main.h"
#include <stdio.h>
#include <stdlib.h>
 /**
 * create_array.
 * @size: argument for size of the array
 * @c: argument for char
 * Return: Always 0.
 */
char *create_array(unsigned int size, char c)
{
	char *my_array;
	unsigned int i = 0;

	my_array = malloc(size * sizeof(c));

	while (i < size)
	{
		if (my_array == NULL)
		{
			return (NULL);
		}
		my_array[i] = c;
		i++;
	}
	return (my_array);
}
