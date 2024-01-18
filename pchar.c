#include "monty.h"
/**
 * _pchar - prints the char at the stack top
 * @head: head of the stack
 * @line_number: line number
 * Return: no return
*/
void _pchar(stack_t **head, unsigned int line_number)
{
	stack_t *h;

	h = *head;
	if (!h)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
		fclose(bus.file);
		free(bus.content);
		_freestack(*head);
		exit(EXIT_FAILURE);
	}
	if (h->n > 127 || h->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
		fclose(bus.file);
		free(bus.content);
		_freestack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", h->n);
}
