#include "main.h"
/**
 *
 *
 *
 */
void check_files(list_t *directorys, list_t *input)
{
	char *path_concat = NULL;

	path_concat =_concat(directorys, input);
	if (strcmp(path_concat, "ERROR") == 0)
		dprintf(2, "Comando no encontrado\n");
	else
	{
		command(input, path_concat);
		free(path_concat);
	}
}
