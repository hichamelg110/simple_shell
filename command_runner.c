#include "shell.h"
/**
 * command_running - a Function that runs a command using fork and exec.
 * @command: The command to run
 */
void execute_command(const char *command)
{
pid_t c_pid = fork();

if (c_pid == -1)
{
hiczak_print("Error fork process.\n");
exit(EXIT_FAILURE);
}
else if (c_pid == 0)
{
char *args[200];
int arg_count = 0;
char *token = strtok((char *)command, " ");
while (token != NULL) {
args[arg_count++] = token;
token = strtok(NULL, " ");
}
args[arg_count] = NULL;
execvp(args[0], args);

hiczak_print("Error execute command.\n");
exit(EXIT_FAILURE);
}
else
{
wait(NULL);
}
}
