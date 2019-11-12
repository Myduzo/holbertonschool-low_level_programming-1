#include "holberton.h"

/**
 * create_file - function that creates a file
 * @filename: name of file to create
 * @text_content: NULL terminated string to write to file
 * Description: 1. Under the snow
 * Return: see below
 * 1. if successful, 1
 * 2. if fail, -1
 * 3. if filename is NULL, -1
 */
int create_file(const char *filename, char *text_content)
{
	int file;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		file = open(filename, O_CREAT | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR);
		return (1);
	}
	else
	{
		file = open(filename, O_CREAT | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR);
		if (file)
		{
			write(STDIN_FILENO, text_content, 2000);
			close(file);
			return (1);
		}
		return (-1);
	}
}
