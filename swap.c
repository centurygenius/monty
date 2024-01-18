#include "monty.h"
/**
 * _swap - adds the top two stack elements
 * @head: head of the stack
 * @line_number: line number
 * Return: no return
*/
void _swap(stack_t **head, unsigned int line_number)
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
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		fclose(bus.file);
		free(bus.content);
		_freestack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	a = h->n;
	h->n = h->next->n;
	h->next->n = a;
}
