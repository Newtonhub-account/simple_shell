#include "shell.h"

/**
 * bfree - frees a pointer and addresses.
 * @ptr: address of the pointer to be freely.
 * Return: 1 if freed, otherwise nil.
 */
int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}

