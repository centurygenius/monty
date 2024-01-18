#include "monty.h"
/**
 * _div - performs division of the top two stack elements
 * @head: stack head
 * @line_number: line_number
 * Return: no return
*/
void _div(stack_t **head, unsigned int line_number)
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
		fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
		fclose(bus.file);
		free(bus.content);
		_freestack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		fclose(bus.file);
		free(bus.content);
		_freestack(*head);
		exit(EXIT_FAILURE);
	}
	a = h->next->n / h->n;
	h->next->n = a;
	*head = h->next;
	free(h);
}
