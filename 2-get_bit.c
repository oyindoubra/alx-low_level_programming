#include "main.h"

/**
 * get bit - brings value of a bit at a specified index
 * @n: uses decimal parameter
 * @index: from 0 - specified bit
 * Return: value of the bit index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	bit = (n >> index);
	if (index > 32)
	return (-1);
	return (bit & 1);
}
