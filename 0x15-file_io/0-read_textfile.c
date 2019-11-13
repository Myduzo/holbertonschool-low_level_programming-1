#include "holberton.h"

/**
 * read_textfile - function that reads a text file and
 * prints it to the POSIX standard output
 * @filename: text file
 * @letters: number of letters it should read and print
 * Description: 0. Tread lightly, she is near
 * Return: Always 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	/* declare variable for buffer, file descriptor & size of text file */
	char *buf;
	int fd, size;
	/* per requirement, if filename is NULL, return 0 */
	if (filename == NULL)
		return (0);
	/* allocate memory for buffer */
	buf = malloc(sizeof(size_t) * letters);
	if (buf == NULL)
		return (0);
	/* open text file but if it's empty, exit and return 0 */
	fd = open(filename, O_RDWR, S_IRUSR | S_IWUSR);
	if (fd < 0)
	{
		exit(1);
		return (0);
	}
	/* read text file to get the size of it */
	/* and add null byte at end */
	size = read(fd, buf, letters);
	buf[size] = '\0';
	/* write text to standard output */
	write(STDOUT_FILENO, buf, letters);
	/* close file */
	close(fd);
	/* per requirement, if successful, return 0 */
	return (0);
}
