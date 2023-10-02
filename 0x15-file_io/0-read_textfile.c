#include "main.h"
/**
 * read_textfile - reads a text file and prints
 *	it to POSIX Standard output
 * @filename: the name of the file
 * @letters: the number of letter it should read
 *	and print
 * Return: the number of letter is could read and
 *	print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, count = 0, readed = -1;
	char *buff;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buff = malloc(letters);
	if (buff == NULL)
		return (0);
	readed = read(fd, buff, letters);
	if (readed == -1)
		return (0);
	buff[readed] = '\0';
	count += readed;

	write(STDOUT_FILENO, buff, readed);

	close(fd);
	return (count);
}
