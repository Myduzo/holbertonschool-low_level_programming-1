#include "lists.h"

/**
 * startup - function executes before int main(void)
 * @void: void
 * Description: apply __attribute__ ((constructor)) in the header file
 */
void startup(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
