#include <stdlib.h>
/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Description:
 *   This function concatenates two strings
 *   The resulting string contains the contents of @s1,
 *   followed by the contents of @s2, and is null terminated.
 *   If @s1 or @s2 is NULL, it is treated as an empty string.
 *
 * Return:
 *   On success, returns a pointer to the newly allocated string that contains
 *   the concatenated result.
 *   On failure, returns NULL.
 *   The returned pointer should be freed using the free() function when it is
 *   no longer needed.
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int size_1 = 0;
	int size_2 = 0;
	int i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[size_1] != '\0')
	{
		size_1++;
	}
	while (s2[size_2] != '\0')
	{
		size_2++;
	}
	ptr = malloc(sizeof(char) * (size_1 + size_2 + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size_1; i++)
		ptr[i] = s1[i];
	for (i = 0; i < size_2; i++)
		ptr[i + size_1] = s2[i];
	ptr[size_1 + size_2] = '\0';
	return (ptr);

}

