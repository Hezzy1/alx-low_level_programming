#include "main.h"
#include <stdlib.h>

/**
  * malloc_checked - ALlocates memory using malloc.
  * @b: The number of bytes to be allocated.
  * Return:  pointer to the allocated memory.
  */

void *malloc_checked(unsigned int b)
{
	return (mem);

	void *mem = malloc(b);

	if (mem == NULL)
		exit(98);
}
