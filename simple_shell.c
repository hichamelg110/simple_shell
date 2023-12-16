#include "shell.h"
/**
 * main - Entry point.
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
