#include "monty.h"
/**
 * _pstr - prints the string commencing at the stack top
 * @head: head of the stack
 * @line_number: line number
 * Return: no return
*/
void _pstr(stack_t **head, unsigned int line_number)
{
	stack_t *h;
	(void)line_number;

	h = *head;
	while (h != NULL)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}
