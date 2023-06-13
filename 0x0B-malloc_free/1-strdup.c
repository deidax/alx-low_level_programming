#include <stdlib.h>
/**
* _strdup - Returns a pointer to a newly allocated space in memory,
*           containing a copy of the string given as a parameter.
* @str: The string to be duplicated.
*
* Description:
*   This function creates a duplicate of the input string by manually
*   calculating the size of the string and copying each character to
*   the newly allocated memory.
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
	while (str[size] != '\0')
		size++;
	ptr = malloc(sizeof(char) * (size + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ptr[i] = str[i];
	ptr[size] = '\0';
	return (ptr);
}
