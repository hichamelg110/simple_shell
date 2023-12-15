#include "shell.h"

void command_user_enter(char *command, size_t s)
{
if (fgets(command, s, stdin) == NULL)
{
if (feof(stdin))
{
hiczak_print("\n");
exit(EXIT_SUCCESS);
}
else
{
error_handler("Failed reading command\n");
}
}
