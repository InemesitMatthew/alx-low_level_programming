#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: The size of the memory block to allocate.
 *
 * Return: A pointer to the allocated memory.
 *         If malloc fails, the function terminates
 *         with a status value of 98.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
		  /**
		    * Terminate the process with status
		    * 98 if malloc fails
		    */
	}
	return (ptr);
}
