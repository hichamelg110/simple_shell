#ifndef SHELL_H
#define SHELL_H


#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdbool.h>
#include <sys/wait.h>

/* Function that displays the shell prompt. */
void hiczak_prompt_displaying(void);

/*
 * Function that prints a message to the standard output.
 * message: The message to be printed.
 */
void hiczak_print(const char *message);

/*
 * Function that reads a command from the user.
 * command: Buffer to store the entered command.
 * s: Size of the buffer.
 */
void command_user_enter(char *command, size_t s);

/*
 * Function that runs a command.
 * command: The command to be executed.
 */
void command_running(const char *command);

/*
 * function that prints an error message and exits the program.
 */

void error_handler(const char *error_msg);
#endif /* SHELL_H */

