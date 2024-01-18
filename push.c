#include "monty.h"
/**
 * _push - adds node to the stack
 * @head: head of the stack
 * @line_number: line number
 * Return: no return
*/
void _push(stack_t **head, unsigned int line_number)
{
	int num;
	int f;
	int j;

	j = 0;
	f = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			j++;
		for (; bus.arg[j] != '\0'; j++)
		{
			if (bus.arg[j] > 57 || bus.arg[j] < 48)
				f = 1; }
		if (f == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", line_number);
			fclose(bus.file);
			free(bus.content);
			_freestack(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", line_number);
		fclose(bus.file);
		free(bus.content);
		_freestack(*head);
		exit(EXIT_FAILURE); }
	num = atoi(bus.arg);
	if (bus.lifi == 0)
		_addnode(head, num);
	else
		_addqueue(head, num);
}
