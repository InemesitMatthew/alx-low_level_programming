#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Prints a name using a given function.
 * @name: The name to be printed.
 * @f: A pointer to a function that takes a char * parameter and returns void.
 *
 * Description: This function takes a name and a function pointer as arguments.
 *              It calls the function pointed to by `f` and
 *              passes the `name` as
 *              its argument to print the name.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
