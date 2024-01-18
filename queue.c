#include "monty.h"
/**
 * _queue - prints the top
 * @head: head of the stack
 * @line_number: line number
 * Return: no return
*/
void _queue(stack_t **head, unsigned int line_number)
{
	(void)head;
	(void)line_number;
	bus.lifi = 1;
}

/**
 * _addqueue - adds node to stack bottom
 * @n: new value
 * @head: stack head
 * Return: no return
*/
void _addqueue(stack_t **head, int n)
{
	stack_t *new_node;
	stack_t *a;

	a = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->next = NULL;
	if (a)
	{
		while (a->next)
			a = a->next;
	}
	if (!a)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		a->next = new_node;
		new_node->prev = a;
	}
}
