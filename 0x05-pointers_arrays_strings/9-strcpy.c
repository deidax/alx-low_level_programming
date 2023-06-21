/**
 * _strcpy - Copies src string to dest buffer.
 * @dest: Destination buffer.
 * @src: Source string.
 *
 * Description:
 *   Copies the string pointed to by src, including the terminating null byte,
 *   to the buffer pointed to by dest. Returns a pointer to dest.
 *
 * Return:
 *   Pointer to dest, which contains a copy of the source string.
 *
 * Note:
 *   - Behavior is undefined if source and destination strings overlap.
 *   - Assumes dest has enough space to hold the entire string.
 *   - Similar to strcpy function; refer to man page for strcpy.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
