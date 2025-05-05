#include "push_swap.h"
#include <stdlib.h>

t_list *new_node(int value)
{
    t_list *node;

    node = (t_list *)malloc(sizeof(t_list));
    if (!node)
        return (NULL);
    node->value = value;
    node->index = 0;
    node->next = NULL;
    return (node);
}

void add_back(t_list **stack, t_list *new)
{
    t_list *last;

    if (!stack || !new)
        return;
    if (!*stack)
    {
        *stack = new;
        return;
    }
    last = *stack;
    while (last->next)
        last = last->next;
    last->next = new;
}

t_list *build_stack(int argc, char **argv)
{
    t_list *stack;
    t_list *new;
    long num;
    int i;

    stack = NULL;
    i = 1;
    while (i < argc)
    {
        num = ft_atoi(argv[i]);
        if (num > INT_MAX || num < INT_MIN)
            return (NULL);
        new = new_node((int)num);
        if (!new)
            return (NULL);
        add_back(&stack, new);
        i++;
    }
    return (stack);
}