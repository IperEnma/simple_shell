#include "main.h"
/**
 * suprandbuild - tasks perform with buffer
 * @buffer: received command
 * Return: 0 or 1 if exit
 */
int suprandbuild(char *buffer)
{
	int exitstatus = 0;

	buffer[strlen(buffer) - 1] = '\0';
	suprtab(buffer);
	exitstatus = checkbuild(buffer);

	return (exitstatus);
}
