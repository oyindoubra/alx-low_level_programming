#include <unistd.h>

/**
 * _putchar - write character c to stdout
 * @c: char to print

 * Return: On success 1 , -1 on error
 *  errno is set appropriately.
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
