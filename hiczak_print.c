#include "shell.h"
/**
 * hiczak_print - a function that writes
 * a string to the standard output.
 * @output: string to be written.
 */
void hiczak_print(const char *output)
{
write(STDOUT_FILENO, output, strlen(output));
}
