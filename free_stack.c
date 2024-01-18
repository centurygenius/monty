#include "monty.h"
/**
* _freestack - frees list
* @head: stack head
*/
void _freestack(stack_t *head)
{
	stack_t *a;

	a = head;
	while (head)
	{
		a = head->next;
		free(head);
		head = a;
	}
}
