#include "shell.h"
/**
 * command_running - a Function that runs a command using fork and exec.
 * @command: The command to run
 */
void command_running(const char *command)
{
pid_t small_pid = fork();

if (small_pid == 0)
{
execlp(command, command, (char *)NULL);
hiczak_print("execlp");
exit(EXIT_FAILURE);
}
else if (small_pid == -1)
{
hiczak_print("fork");
exit(EXIT_FAILURE);
}
else
{
wait(NULL);
}
}
