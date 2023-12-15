#include "shell.h"

/**
 * error_handler - a function that prints
 * an error message and exits the program.
 * @error_msg: The error message to be printed.
 *
 * This function writes the error message to the standard error (stderr),
 * and exits the program with a failure status.
 */
void error_handler(const char *error_msg)
{
size_t len = strlen(error_msg);
write(STDERR_FILENO, error_msg, len);
exit(EXIT_FAILURE);
}