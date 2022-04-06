#include "main.h"
/**
 *
 *
 *
 */
int check_files(list_t *directorys, list_t *input)
{
	char *path_concat = NULL;
	int status = 0;

	path_concat =_concat(directorys, input);
	if (strcmp(path_concat, "ERROR") == 0)
		dprintf(2, "Comando no encontrado\n");
	else
	{
		status = command(input, path_concat);
		free(path_concat);
	}
	return (status);
}
