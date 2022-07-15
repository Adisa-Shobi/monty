#include "monty.h"

/**
 *rotr - Rotates the stack from the bottom up
 *
 *@line_number: The current line number
 *@stack: The stack
 *Return: void
 */
void rotr(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
	stack_t *ptr = *stack, *tmp;

	if (ptr)
	{
		while(ptr->prev)
		{
			tmp = ptr->prev;
			ptr->prev = ptr->next;
			ptr->next = tmp;
			ptr = tmp;
		}
		ptr->prev = ptr->next;
		ptr->next = NULL;
		*stack = ptr;
	}
}
