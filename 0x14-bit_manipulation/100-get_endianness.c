#include "main.h"
/**
 * get_endianness - checks for endianness
 *
 * Return: 0 for big endian and 1 for small endian
 */
int get_endianness(void)
{
	int i;
	char *c;

	i = 1;
	c = (char *)&i;

	return (*c);
}
