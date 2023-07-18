#include <stdio.h>
#include <string.h>

extern char **environ;

char *_getenv(const char *name);

int main (int ac, char *av[])
{
	char *v;
	
	if (ac != 2)
		printf("error, run ./g VAR ,where VAR is env variable name\n");
	v = _getenv(av[1]);
	printf("---%s---\n", av[1]);
	if (v != NULL)
		printf("%s\n", v);
	else
		printf("NOT FOUND\n");
	
	return (0);
}
char *_getenv(const char *name)
{
	size_t name_l = 0;
	char **env = NULL;
	if (name == NULL || environ == NULL)
		return (NULL);
	name_l = strlen(name);
	for (env = environ; *env != NULL; env++)
	{
		if (strncmp(name, *env, name_l) == 0 && (*env)[name_l] == '=')
		{
			return (*env + name_l + 1);
		}
	}
	return (NULL);
}
