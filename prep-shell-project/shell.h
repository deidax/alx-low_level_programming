typedef struct attribute
{
	char *attr;
	struct attribute *next;
} attribute;
typedef struct command
{
        char *cmd;
	attribute *attrs;
        struct command *next;
} command;
void shell_prompt(char **cmd);
void command_av(command **head, char **cmd);
command *add_command(command **head, const char *cmd);
void add_attribute(command *cmd, const char *attr);
size_t print_command(const command *h);
