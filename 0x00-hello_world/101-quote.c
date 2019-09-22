#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <sys/types.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (Success)
 */
int main(int argc, char *argv[])
{
	int stderror;
	char buf[58];
	stderror = open(argv[1], O_WRONLY | O_CREAT);
	write (stderror, "and that piece of art is useful\" - Dora Korpar, 2015-10-19", strlen(buf));
	close (stderror);
	return (1);
}
