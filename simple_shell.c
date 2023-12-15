#include "shell.h"
/**
 * main - Entry point.
 * a function that allocates memory for a command, continuously prompts the user
 * for input, runs the command, and then frees the allocated memory.
 * Return: 0 if successful, otherwise returns error
 */

int main(void)
{
char* memory_comm = malloc(230);
while (1)
{
hiczak_prompt_displaying();
command_user_enter(memory_comm, 230);
command_running(memory_comm);
}
free(memory_comm);

return (0);
}
