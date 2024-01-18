#include "monty.h"
/**
  *_sub- computed sustration operation
  *@head: head of the stack
  *@line_number: line number
  *Return: no return
 */
void _sub(stack_t **head, unsigned int line_number)
{
	stack_t *a;
	int s;
	int nodes;

	a = *head;
	nodes = 0;
	while (a != NULL)
	{
		a = a->next;
		nodes++;
	}
	if (nodes <= 1)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
		fclose(bus.file);
		free(bus.content);
		_freestack(*head);
		exit(EXIT_FAILURE);
	}
	a = *head;
	s = a->next->n - a->n;
	a->next->n = s;
	*head = a->next;
	free(a);
}
