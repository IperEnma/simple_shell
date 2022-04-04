/**
 * addnode - create list
 * @head: irst node
 * @s: parameters
 * Return: void
 */
void addnode(list_t **head, char *s)
{
	list_t *headaux = *head;
	list_t_ *new;

	if (s == NULL)
		printf("error al crear la lista\n");
	else
	{
		new = malloc(sizeof(tokene));
		if (new == NULL)
		{
			printf("error al crear la lisa\n");
		}
		else
		{
			new->s = s;
			new->next = NULL;

			if (s && *head)
			{
				for (; headaux->next;)
				{
					headaux = headaux->next;
				}
				new->next = NULL;
				headaux->next = new;
			}
			else
			{
				*head = new;
			}
		}
}
