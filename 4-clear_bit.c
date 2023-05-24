
#include <stdlib.h>
#include "main.h"
/**
 * clear_bit -will set the value of a bit to 0 at a given index
 * @n: parameter
 * @index: 0 to the set index
 * Return: 1 if it  works, -1 if it doesnt work
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
