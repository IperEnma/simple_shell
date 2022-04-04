#include "main.h"
/**
 *
 *
 *
 */
int main(int argc, char *argv[])
{
	char *env = NULL, *path_concat = NULL;
	int i = 0;
	list_t *directorys = NULL, *input = NULL;

	env = getpath(); /*obtenemos path de la variable environ*/
	tokenizador(env, &directorys, ":"); /*tokenizamos y enviamos a una lista los directorios*/

	print_list(directorys); /* FUNCION TEMPORAL PARA COMPROBAR EL STATUS DE LA LISTA*/

	if (argc == 1)
	{
		
	}
	else
	{
		for (i = 1; argv[i]; i++)
			addnode(&input, argv[i]);

		if (*argv[1] != '/')
			path_concat = _concat(directorys, input);
		else
		{
			if (get_stat(argv[1]) == 0)
				path_concat = argv[1];
			else
				path_concat = "comando no encontrado";
		}

		if (strcmp(path_concat, "Comando no encontrado") == 0)
			printf("Comando no encontrado\n");
		else
		{
			command(input, path_concat);
			if (*argv[1] != '/')
				free(path_concat);
		}
	}

	print_list(input);
	free_nodes(input);
	free_nodes(directorys);
	return (0);
}
