#include "push_swap.h"

int main(int argc, char **argv)
{
    t_list *stack_a;
    t_list *stack_b;

    if (argc < 2)
        return (0);
    stack_a = build_stack(argc, argv);
    stack_b = NULL;

    print_stack(stack_a);

    // TODO SORTING

    return (0);
}