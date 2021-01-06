#include "cdarr.h"

/*
// arr: array to be initialized
//
// initializes an array with default starting size and no elements
*/

t_cdarr	*init_cdarr(t_cdarr *arr)
{
	if (!arr)
		return (NULL);
	arr->size = START_SIZE;
	arr->used = 0;
	if (!(arr->arr = calloc(arr->size, sizeof(int))))
		return (NULL);
	return (arr);
}
