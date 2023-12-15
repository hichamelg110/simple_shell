#include "shell.h"

void read_command(char *command, size_t size)
{
if (fgets(command, size, stdin) == NULL)
{
if (feof(stdin))
{
hiczak_print("\n");
exit(EXIT_SUCCESS);
}

else
{
hiczak_print("Failed reading command.\n");
exit(EXIT_FAILURE);
}
}
command[strcspn(command, "\n")] = '\0';
}

