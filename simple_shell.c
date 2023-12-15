#include "shell.h"
/**
 * main - Entry point.
 * a function that allocates memory for a command,
 * continuously prompts the user
 * for input, runs the command, and then frees the allocated memory.
 * Return: 0 if successful, otherwise returns error
 */

int main(void)
{
char command[120];
while (1)
{
hiczak_prompt_displaying();
fgets(command, sizeof(command), stdin);
}

return (0);
}
