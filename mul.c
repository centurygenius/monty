#include "monty.h"
/**
 * _mul - multiplies the top two stack elements
 * @head: stack head
 * @line_number: line number
 * Return: no return
*/
void _mul(stack_t **head, unsigned int line_number)
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
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
		fclose(bus.file);
		free(bus.content);
		_freestack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	a = h->next->n * h->n;
	h->next->n = a;
	*head = h->next;
	free(h);
}
