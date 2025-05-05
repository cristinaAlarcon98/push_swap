#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stddef.h>
#include <stdlib.h>
#include <limits.h>
#include "libft/libft.h"
#include <limits.h>

typedef struct s_list
{
    int value;
    int index;
    struct s_list *next;
} t_list;

t_list *new_node(int value);
void add_back(t_list **stack, t_list *new);
t_list *build_stack(int argc, char **argv);
void print__stack(t_list *stack);

#endif
