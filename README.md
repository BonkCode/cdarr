# cdarr

cdarr is a small library that implements dynamically growing arrays in c.

## Description

This is my take on dynamically growing int arrays in C. Simple to use, lightweight and fast.
Simplifies work with int arrays, since you don't need to allocate any memory by hand, which is(memory allocation)
confusing when you start learning C.

## Installation

Use git to clone the repository, then compile it using its Makefile and use cdarr.a to compile with your project.

```bash
git clone https://github.com/BonkCode/cdarr.git
make -C cdarr
mv cdarr/cdarr.a .
gcc -Icdarr mysourcecode.c cdarr.a -o myexecutable.out
```

## Usage

```c
#include "cdarr.h" // don't forget to include the library

t_cdarr a;

init_cdarr(&a); // initialize the array

for (int i = 0; i < 5; ++i)
	append(&a, i); // append values to the array


for (int i = 0; i < a.used; ++i)
	printf ("%i: %i\n", i, a.arr[i]); // print any value in the array

pop(&a, 2); // pop value from the array

free_cdarr(&a); // free array after using it
```

## Some stuff about specifics

```c
t_cdarr	*init_cdarr(t_cdarr *arr);
```
This function initializes an array, using START_SIZE, defined in cdarr.h which is by default 4.

Return value: returns pointer to allocated array structure on sucess, NULL otherwise. 


```c
int	append(t_cdarr *arr, int elem);
```
This function adds an element to the end of the array.

In case of an error occuring during memory allocation it stops appending and returns.

Return value: returns 0 on success, -1 otherwise.


```c
int	pop(t_cdarr *arr, size_t index);
```
This function deletes an element from an array and returns its value.
If the index is larger than the size of the array, last element is popped. 

Return value: returns popped elements value.


```c
void free_cdarr(t_cdarr *arr);
```
This function frees array and sets it to NULL