#include <unistd.h>

/**
 * main - prints stderr
 * Description: Printing a standard error message
 * Return: 1
 */
int main(void)
{
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
return (1);
}
