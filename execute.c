#include "main.h"
/**
 *
 *
 *
 */
void command(list_t *head, char *path_concat)
{
	pid_t pid = 0;
	int i = 0, directory = 0;
	list_t *aux = NULL;
	char **arg = NULL;
	
	aux = head;
	for (i = 0; aux; i++)
	{
		aux = aux->next;
	}
	i++;
	arg = malloc(i * sizeof(char *));
	if (!arg)
	{
		printf("ERROR MALLOC");
		exit(98);
	}
	aux = head;
	for (i = 0; aux; i++)
	{
		arg[i] = aux->s;
		aux = aux->next;
	}
	arg[i] = NULL;

	pid = fork();	
	if (pid == -1)
		perror("ERROR FORKING\n");
	if (pid == 0)
	{
		if (path_concat)
			directory = execve(path_concat, arg, NULL);
		if (directory == -1)
			dprintf(2, "Es un directorio\n");
				
	}
	else
		wait(NULL);
	free(arg);
}
