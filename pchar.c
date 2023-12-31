#include "monty.h"

/**
 * f_pchar - Prints character at the top of the stack, followed by new line
 *
 * @head: Pointer to the head of the stack.
 * @counter: Line number.
 */
void f_pchar(stack_t **head, unsigned int counter)
{
	stack_t *current;

	current = *head;
	if (!current)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	if (current->n < 0 || current->n > 127)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	printf("%c\n", current->n);
}
