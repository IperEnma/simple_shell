#include "main.h"
/**
 *
 *
 *
 */
char *_concat(list_t *dir, list_t *input)
{
	char *path_concat;
	struct stat st;
	int i = 0, j = 0;
	
        for (j = 0; input->s[j]; j++)

	while (dir)
	{
		for (i = 0; dir->s[i]; i++)

		path_concat = malloc(i + j + 1);

		for (i = 0; dir->s[i]; i++)
		{
			path_concat[i] = dir->s[i];
		}
		path_concat[i] = '/';
		i++;
		for (j = 0; input->s[j]; j++)
		{
			path_concat[i] = input->s[j];
			i++;
		}
		path_concat[i] = '\0';
		
		if (stat(path_concat, &st) == 0)
       		{
			return (path_concat);
        	}
        	else
        	{
			free(path_concat);
        	}
		dir = dir->next;
	}
	return ("Comando no encontrado");
}
