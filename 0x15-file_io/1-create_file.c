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
	/* declare variable for new file */
	int newfile;
	/* per requirement, if filename is NULL, then, return -1 */
	if (filename == NULL)
	{
		return (-1);
	}
	/* per requirement, if text_content is NULL, then, create empty file */
	if (text_content == NULL)
	{
		newfile = open(filename, O_WRONLY);
		exit(1);
		return (1);
	}
	/**
	 * 1. create file that truncates if it exists already
	 * 2. and gives rw permission to user only
	 * 3. per requirement, if file failed to create, write, etc., then, return -1
	 * 4. if file is created, write text_content to it
	 * 5. close file and return 1
	 */
	newfile = open(filename, O_CREAT | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR);
	if (newfile == -1)
	{
		exit(1);
		return (-1);
	}
	write(newfile, text_content, _strlen(text_content));
	close(newfile);
	return (1);
}
