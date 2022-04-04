#include "main.h"
/**
 *
 *
 *
 */
int main(int argc, char *argv[])
{
	char *aux = NULL;
	char *env = NULL;
	char *path = NULL;
	char *path_concat = NULL;
	int i = 0;
	list_t *directorys = NULL;
	list_t *input = NULL;

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
		path_concat = _concat(directorys, input);
		if (strcmp(path_concat, "Comando no encontrado") == 0)
			printf("Comando no encontrado\n");
		else
		{
			command(input, path_concat);
			free(path_concat);
		}
	}

	print_list(input);
	free_nodes(input);
	free_nodes(directorys);
	return (0);
}
