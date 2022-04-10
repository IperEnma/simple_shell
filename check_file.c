#include "main.h"
/**
 * check_files - check if it is directory or file
 * @directorys: list
 * @input: command
 * Return: status
 */
int check_files(list_t *directorys, list_t *input)
{
	char *path_concat = NULL;
	int status = 0;

	path_concat = _concat(directorys, input);
	if (strcmp(path_concat, "ERROR") == 0)
		perror("");
	else
	{
		status = command(input, path_concat);
		free(path_concat);
	}
	return (status);
}
