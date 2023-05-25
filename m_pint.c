#include "monty.h"

/**
 * m_pint -It prints the value on top of stack, or exit if stack is empty
 * @stack: double ptr to the head of stack
 * @line_number: line numberof current operation
 * Return: void
 */

void m_pint(stack_t **stack, unsigned int line_number)
{
	stack_t *head = *stack;

	if (var.stack_len == 0)
	{
		dprintf(STFOUT_FILENO,
				"L%u: can't pint, stack empty\n",
				line_number);
		exit(EXIT_FAILURE)
	}
	printf("%d\n", head->);
}
