#include "monty.h"
/**
 * _add - sums the top two elements of the stack.
 * @head: stack head
 * @line_number: line_number
 * Return: no return
 */
void _add(stack_t **head, unsigned int line_number)
{
	stack_t *h;
	int lenght;
	int a;

	lenght = 0;

	h = *head;
	while (h)
	{
		h = h->next;
		lenght++;
	}

	if (lenght <= 1)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		fclose(bus.file);
		free(bus.content);
		_freestack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	a = h->n + h->next->n;
	h->next->n = a;
	*head = h->next;
	free(h);
}
