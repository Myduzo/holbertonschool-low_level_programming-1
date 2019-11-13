#include "holberton.h"

/**
 * _strlen - function that returns the length of a string
 * @s: characters
 * Description: Look up man strlen for reference
 * Return: length
 */
int _strlen(char *s)
{
	int len = 0;
	int count;

	for (count = 0; s[count] != '\0'; count++)
	{
		len++;
	}
	return (len);
}

/**
 * append_text_to_file - function that appends text to a file
 * @filename: name of file
 * @text_content: NULL terminated string to append to file
 * Description: 2. Speak gently, she can hear
 * Return: see below
 * 1. if successful, 1
 * 2. if fail, -1
 * 3. if filename is NULL, -1
 * 4. if text_content is NULL & file exists, return 1
 * 5. if text_content is NULL, file doesn't exists & no permissions, return -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		fd = open(filename, O_RDONLY);
		return (1);
	}
	fd = open(filename, O_RDWR | O_APPEND, S_IRGRP | S_IWGRP | S_IROTH);
	if (fd == -1)
	{
		exit(1);
		return (-1);
	}
	write(fd, text_content, _strlen(text_content));
	close(fd);
	return (1);
}
