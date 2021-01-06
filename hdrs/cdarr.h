#ifndef CDARR_H
# define CDARR_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>

# define START_SIZE 4;

typedef struct	s_cdarr
{
	int			*arr;
	size_t		used;
	size_t		size;
}				t_cdarr;

t_cdarr	*init_cdarr(t_cdarr *arr);
int		append(t_cdarr *arr, int elem);
int		pop(t_cdarr *arr, size_t index);
void	free_cdarr(t_cdarr *arr);

#endif
