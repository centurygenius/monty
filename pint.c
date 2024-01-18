#include "monty.h"
/**
 * _pint - prints top stack element
 * @head: stack head
 * @line_number: line number
 * Return: no return
*/
void _pint(stack_t **head, unsigned int line_number)
{
	if (*head != NULL)
		printf("%d\n", (*head)->n);
	else
	{
		fprintf(stderr, "L%u: can't print, stack empty\n", line_number);
		fclose(bus.file);
		free(bus.content);
		_freestack(*head);
		exit(EXIT_FAILURE);
	}
}
