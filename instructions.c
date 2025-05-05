#include "push_swap.h"

void sa(t_list **stack)
{
    t_list *first;
    t_list *second;

    if (!stack || !*stack || !(*stack)->next)
        return;
    first = *stack;
    second = first->next;
    first->next = second->next;
    second->next = first;
    *stack = second;
}