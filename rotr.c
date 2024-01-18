#include "monty.h"
/**
  *_rotr - rotates stack to the bottom
  *@head: head of the stack
  *@line_number: line number
  *Return: no return
 */
void _rotr(stack_t **head, __attribute__((unused)) unsigned int line_number)
{
	stack_t *c;

	c = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (c->next)
	{
		c = c->next;
	}
	c->next = *head;
	c->prev->next = NULL;
	c->prev = NULL;
	(*head)->prev = c;
	(*head) = c;
}
