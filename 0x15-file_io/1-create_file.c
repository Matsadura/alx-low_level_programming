#include "main.h"
/**
 * _strlen - this function compute the lenght of a string
 * @s: pointer to the string
 * Return: return the lenght of the string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}

/**
 * create_file - creates a file
 * @filename: the name of the file
 * @text_content: the content to write inside
 *	the file
 * Return: 1 on success, -1 on failure or
 *	if filename or text_content is NULL
 */

int create_file(const char *filename, char *text_content)
{
	int fd, w;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
		w = write(fd, text_content, _strlen(text_content));
	if (w == -1)
		return (-1);

	close(fd);
	return (1);
}
