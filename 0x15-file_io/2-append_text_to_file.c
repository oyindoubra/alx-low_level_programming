#include <stddef.h>
#include "main.h"

/**
 * _strlen - string length count
 * @str: string used

 * Return: string length
 */


int _strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;
	return (len);
}

/**
 * append_text_to_file - appends text 
 * @filename: name of file
 * @text_content: content to be appended
 *
 * Return: 1 on success, -1 if not successful
 */


int append_text_to_file(const char *filename, char *text_content)
{
	int file, wrote;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);
	if (text_content != NULL)
	{
		wrote = write(file, text_content, _strlen(text_content));
		if (wrote == -1)
		{
			close(file);
			return (-1);
		}
		close(file);
		return (1);
	}
	else
	{
		close(file);
		return (1);
	}
}
