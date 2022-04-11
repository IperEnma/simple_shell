#include "main.h"
/**
 * checkbuild - check exit to env, builtin functions
 * @buffer: received command
 * Return: 0 no exit or 1 exit
 */
int checkbuild(char *buffer)
{
	int status = 0;

	status = funexit(buffer);
		if (status == 1)
			return (1);

	return (0);

}
