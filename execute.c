#include "main.h"
/**
 *
 *
 *
 */
void command(list_t *head, char *path_concat)
{
	pid_t pid, my_pid;
	int len = 0, i = 0, exe = 0;
	list_t *aux = NULL;
	char **arg = NULL;
	struct stat st;
	
	aux = head;
	for (i = 0; aux; i++)
	{
		aux = aux->next;
	}
	i++;
	arg = malloc(i * sizeof(char *));
	aux = head;
	for (i = 0; aux; i++)
	{
		arg[i] = aux->s;
		aux = aux->next;
	}
	i++;
	arg[i] = NULL;

	pid = fork();	
	if (pid == -1)
		perror("ERROR FORKING\n");
	my_pid = getpid();
	if (pid == 0)
	{
		exe = execve(path_concat, arg, NULL);
		if (exe == -1)
		{	
			printf("Comando no existente\n");
		}
	}
	else
	{
		wait(NULL);
	}
	free(arg);
}
