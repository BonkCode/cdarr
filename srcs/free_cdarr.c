#include "cdarr.h"

/*
// arr: array to be free'd
//
// frees an array and assigns NULL to it
*/

void	free_cdarr(t_cdarr *arr)
{
	free(arr->arr);
	arr->arr = NULL;
	arr->size = 0;
	arr->used = 0;
}
