#include "main.h"

/**
 * clear_bit - place the value of a bit to 0 at a given index.
 * @n: number that  i represents
 * @index: starting from 0 of the bit you want to put
 * Return: 1 if it worked, or -1 ifit did not work
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	i = ~(1 << index);
	*n = *n & i;

	return (1);
}
