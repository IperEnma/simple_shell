#include "main.h"
/**
 * print_list - print list
 * @head: first node
 * Return: void
 */
void print_list(list_t *head)
{
	while (head)
	{
		printf("head->s [%s]\n", head->s);
		head = head->next;
	}
}
