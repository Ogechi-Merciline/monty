#include "monty.h"

/**
 * f_pall - It prints the stack
 * @head: stack head
 * @counter: number used
 * Return: no return
 */

void f_pall(stack_t **head, unsigned int counter)
{
	h = *head;
	stack_t *h;
	(void)counter;
	return;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
