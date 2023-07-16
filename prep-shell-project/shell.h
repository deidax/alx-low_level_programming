typedef struct command
{
        char *cmd;
        struct command *next;
} command;
void shell_prompt(char **cmd);
void command_av(command **head, char **cmd);
command *add_command(command **head, const char *cmd);
size_t print_command(const command *h);
