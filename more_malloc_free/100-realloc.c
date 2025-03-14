#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free.
 * @ptr: the pointer to reallocate.
 * @old_size: size of the given pointer.
 * @new_size: size to be reallocated.
 *
 * Return: Null, newPtr or ptr.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	/**unsigned int i, min;*/
	char *newPtr;

	if (ptr == NULL)
		ptr = malloc(new_size);

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		/**loop on ptr[sizePtr]? */
		free(ptr);
		return (NULL);
	}

	if (new_size > old_size)
	{
		newPtr = malloc(sizeof(char) * new_size);
		if (newPtr == NULL)
			return (NULL);
		free(ptr);
		return (newPtr);
	}
	return (ptr);
}
