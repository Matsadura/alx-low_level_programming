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
 * append_text_to_file - appends text at the end
 *	of a file
 * @filename: the name of the file
 * @text_content: the text to append
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, app;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
		app = write(fd, text_content, _strlen(text_content));
	if (app == -1)
		return (-1);

	close(fd);
	return (1);
}
