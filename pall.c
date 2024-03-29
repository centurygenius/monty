#include "monty.h"
/**
 * _pall - prints stack
 * @head: head of te stack
 * @line_number: line_number
 * Return: no return
*/
void _pall(stack_t **head, unsigned int line_number)
{
	stack_t *h;
	(void)line_number;

	h = *head;
	if (h == NULL)
		return;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
