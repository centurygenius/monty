#include "monty.h"
/**
 * _pop - prints the top stack element
 * @head: head of the stack
 * @line_number: line number
 * Return: no return
*/
void _pop(stack_t **head, unsigned int line_number)
{
	stack_t *h;

	if (*head != NULL)
	{
		h = *head;
		*head = h->next;
		free(h);
	}

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		fclose(bus.file);
		free(bus.content);
		_freestack(*head);
		exit(EXIT_FAILURE);
	}
}
