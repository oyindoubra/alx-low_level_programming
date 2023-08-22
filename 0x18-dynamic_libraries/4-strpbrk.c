#include "main.h"

/**
 * _strpbrk - searches a str for any of a set of bytes
 * s: first str
 * accept: second string
 * Return: a pointer to the byte in s that matches one of the bytes
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
				return (s + i);
		}
	}
	return ('\0');
}
