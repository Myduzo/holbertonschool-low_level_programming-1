#include <stdio.h>

/**
 * main - function to print Fizz-Buzz
 *
 * Description: The Fizz-Buzz test
 * Return: 0 for success.
 */
int main(void)
{
	int test;

	for (test = 1; test <= 100; test++)
	{
		if (!(test % 15))
		{
			printf("FizzBuzz ");
		}
		else if (!(test % 3))
		{
			printf("Fizz ");
		}
		else if (!(test % 5))
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", test);
		}
	}
	printf("\n");
	return (0);
}
