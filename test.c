#include <stdio.h>
#include "hdrs/cdarr.h"

int main(void)
{
	t_cdarr a;

	init_cdarr(&a); // initialize the array

	for (int i = 0; i < 5; ++i)
		append(&a, i); // append values to the array


	for (int i = 0; i < a.used; ++i)
		printf ("%i: %i\n", i, a.arr[i]); // print any value in the array

	pop(&a, 2); // pop value from the array

	free_cdarr(&a); // free array after using it
	return (0);
}
