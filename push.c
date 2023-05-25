#include "monty.h"
#include <ctype.h>

/**
 * check_for_digit - Check that a str contains digits only
 * @arg: str to check
 * Return: 0 if only digits, else 1
 */

static int check_for_digit(char *arg)
{
	int i;

	for (i = 0; arg[i]; i++)
	{
		if (arg[i] == '_' && i == 0)
			continue;
		if (isdigit(arg[i]) == 0)
			return (1);
	}
	return (0);
}

/**
 * m_push - To push an interger onto stack
 * @stack: double ptr to beginning of stack
 * @line_number: script line number
 * Return: void
 */

void m_push(stack_t **stack, unsigned int line_number)
{
	char *arg;
	int n;

	arg = strtok(NULL, "\n\t\r ");
	if (arg == NULL || check_for_digit(arg))
	{
		dprintf(STDOUT_FILENO,
				"L%u: usage: push interger\n",
				line_number);
		exit(EXIT_FAILURE);
	}
	n = atoi(arg);
	if (!add_node(stack, n))
	{
		dprintf(STDOUT_FILENO, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	var.stack_len++;
}
