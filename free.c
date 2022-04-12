#include "main.h"
/**
 * free_nodes - free list
 * @head: first node
 * Return: void
 */
void free_nodes(list_t *head)
{
	list_t *aux = head;
	list_t *auxfree;

	if (head)
	{
		while (aux)
		{
			auxfree = aux;
			aux = aux->next;
			free(auxfree->s);
			free(auxfree);
		}
	}
}
