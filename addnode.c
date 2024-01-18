#include "monty.h"
/**
 * _addnode - it adds a node to the stack head
 * @head: stack head
 * @n: new value
 * Return: no return
*/
void _addnode(stack_t **head, int n)
{

	stack_t *newnode;
	stack_t *a;

	a = *head;
	newnode = malloc(sizeof(stack_t));
	if (newnode == NULL)
	{ printf("Error\n");
		exit(0); }
	if (a)
		a->prev = newnode;
	newnode->n = n;
	newnode->next = *head;
	newnode->prev = NULL;
	*head = newnode;
}
