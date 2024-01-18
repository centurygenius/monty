#include "monty.h"
/**
  *_rotl- rotates stack to the topmost
  *@head: head of the stack
  *@line_number: line number
  *Return: no return
 */
void _rotl(stack_t **head,  __attribute__((unused)) unsigned int line_number)
{
	stack_t *tmp = *head;
	stack_t *a;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	a = (*head)->next;
	a->prev = NULL;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = tmp;
	(*head) = a;
}
