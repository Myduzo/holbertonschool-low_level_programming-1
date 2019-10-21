#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that prints file name
 * Description: Prints file name followed by new line
 * Return: 0 for success
 */
int main(void)
{	
	printf("%s\n", __BASE_FILE__);
	return (0);
}
