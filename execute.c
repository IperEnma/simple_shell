#include "main.h"
/**
 * command - send directory or command to execve
 * @head: list with directorys
 * @path_concat: command concatenate
 * Return: status execve
 */
int command(list_t *head, char *path_concat)
{
	pid_t pid = 0;
	int i = 0, status = 0;
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
		perror("MY-SHELL");
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
		perror("MY-SHELL");
	if (pid == 0)
	{
		if (execve(path_concat, arg, NULL) == -1)
			perror("");
	}
	else
	{
		wait(&status);
	}
	free(arg);
	return (WEXITSTATUS(status));
}
