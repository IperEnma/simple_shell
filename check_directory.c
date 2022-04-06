#include "main.h"
/**
 *
 *
 *
 */
void check_directory(list_t *input)
{
	int stat = 0, file = 0;
	char *path_concat = NULL;

	stat = get_stat(input->s);
	if (stat != 0)
		dprintf(2, "No es un archivo ni un directorio\n");
	else
	{
		file = regular_file(input->s);
		if (file == 0)
			dprintf(2, "Es un directorio\n");
		else
		{
			path_concat = input->s;
			command(input, path_concat);
		}
	}	
}
