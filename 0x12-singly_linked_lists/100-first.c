#include "lists.h"

/* apply constructor attribute so it executes before int main(void) */
void startup(void) __attribute__ ((constructor));

/* implement startup function */
void startup(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
