#include "shell.h"

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
