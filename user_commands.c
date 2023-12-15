#include "shell.h"
/**
 * command_user_enter - a function that reads a command
 * from the standard input.
 * @command: a pointer to the buffer where the command will be stored.
 * @s: The size
 */
void command_user_enter(char *command, size_t s)
{
if (fgets(command, s, stdin) == NULL)
{
if (feof(stdin))
{
printf("\n");
exit(EXIT_SUCCESS);
}
else
{
error_handler("Error reading command\n");
}
}
