#ifndef SIMPLESHELL
#define SIMPLESHELL
/**
 * struct list_s - structure for the list
 * @s: parameters
 * @next: node next
 */
typedef struct list_s
{
	char *s;
	struct tokenizer *next;
} list_t;
char *_strdup(char *str);
#endif
