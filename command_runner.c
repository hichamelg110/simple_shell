#include "shell.h"

void command_running(const char *command, char *const args[])
{
pid_t small_pid = fork();

if (small_pid == 0)
{
execve(command, args);
perror("execve");
exit(EXIT_FAILURE);
}
else if (small_pid == -1)
{
perror("fork");
exit(EXIT_FAILURE);
}
else
{
wait(NULL);
}
}
