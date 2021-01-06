#include "cdarr.h"

/*
// arr: array to be inserted in
// elem: element to insert
//
// inserts an element into the end of the list
*/

int	append(t_cdarr *arr, int elem)
{
	int	*arr_copy;

	arr_copy = NULL;
	if (arr->used < arr->size)
		arr->arr[arr->used++] = elem;
	else
	{
		if (!(arr_copy = calloc(arr->size * 2, sizeof(int))))
			return (-1);
		memcpy(arr_copy, arr->arr, arr->used * sizeof(int));
		arr_copy[arr->used++] = elem;
		free(arr->arr);
		arr->arr = arr_copy;
		arr->size = arr->size * 2;
	}
	return (0);
}
