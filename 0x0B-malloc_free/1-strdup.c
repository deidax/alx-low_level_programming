#include <stdlib.h>
/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 *           containing a copy of the string given as a parameter.
 * @str: The string to be duplicated.
 *
 * Description:
 *   This function creates a duplicate of the input string by allocating
 *   memory using malloc. The duplicate string is an exact copy of the
 *   original string.
 *
 * Return:
 *   On success, returns a pointer to the duplicated string.
 *   On failure or if str is NULL, returns NULL.
 *   The returned pointer should be freed using the free() function
 *   when it is no longer needed.
 */
char *_strdup(char *str)
{
	char *ptr;
	int size = 0;
	int i = 0;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		size = i;
	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i <= size)
	{
		ptr[i] = str[i];
		i++;
	}
	return (ptr);
}
