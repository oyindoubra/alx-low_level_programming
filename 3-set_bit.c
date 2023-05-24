#include <stdlib.h>
#include "main.h"

/**
 * set_bit - it would set the value of a bit to 1 at a given index
 * @n: 
 * @index: 0 to the given index
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n |= (1 << index);
	return (1);
}
