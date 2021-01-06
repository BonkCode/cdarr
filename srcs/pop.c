#include "cdarr.h"


/*
// arr: an array that needs to be popped from
// index: index of an element to be popped
//
// deletes an element with given index from the list and returns its value
*/

int	pop(t_cdarr *arr, size_t index)
{
	int	value;

	if (arr->used < 1)
		return (0);
	if (index >= arr->used)
		return (pop(arr, arr->used - 1));
	value = arr->arr[index];
	memcpy(arr->arr + index,
			arr->arr + index + 1,
			(arr->used - index) * sizeof(int));
	--arr->used;
	return (value);
}
