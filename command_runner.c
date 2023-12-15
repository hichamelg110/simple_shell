#include "shell.h"

void command_running(const char *command)
{
pid_t child_pid = fork();

if (child_pid == -1)
{
hiczak_print("Failed forking process.\n");
exit(EXIT_FAILURE);
}
else if (child_pid == 0)
{
char *args[128];
int arg_count = 0;

char *token = strtok((char *)command, " ");
while (token != NULL) {
args[arg_count++] = token;
token = strtok(NULL, " ");
}

args[arg_count] = NULL;
execvp(args[0], args);

hiczak_print("Failed executing command.\n");
exit(EXIT_FAILURE);
}
else
{
wait(NULL);
}
}
