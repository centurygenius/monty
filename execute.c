#include "monty.h"
/**
* execute - this funtion executes the opcode
* @stack: head linked list - stack
* @line_counter: line counter
* @file: poiner to monty file
* @line_content: line content
* Return: no return
*/
int execute(char *line_content, stack_t **stack, unsigned int line_counter, FILE *file)
{
	instruction_t opst[] = {
				{"push", _push}, {"pall", _pall}, {"pint", _pint},
				{"pop", _pop},
				{"swap", _swap},
				{"add", _add},
				{"nop", _nop},
				{"sub", _sub},
				{"div", _div},
				{"mul", _mul},
				{"mod", _mod},
				{"pchar", _pchar},
				{"pstr", _pstr},
				{"rotl", _rotl},
				{"rotr", _rotr},
				{"queue", _queue},
				{"stack", _stack},
				{NULL, NULL}
				};
	unsigned int i;
	char *op;

	i = 0;

	op = strtok(line_content, " \n\t");
	if (op && op[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (opst[i].opcode && op)
	{
		if (strcmp(op, opst[i].opcode) == 0)
		{	opst[i].f(stack, line_counter);
			return (0);
		}
		i++;
	}
	if (op && opst[i].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", line_counter, op);
		fclose(file);
		free(line_content);
		_freestack(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
