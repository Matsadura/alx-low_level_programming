#include "lists.h"

void before_main(void) __attribute__ ((constructor));
/**
 * before_main - executes a function before
 *	the main function
 */

void before_main(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
