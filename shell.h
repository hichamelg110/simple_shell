#ifndef SHELL_H
#define SHELL_H
/**
 * The used headerfiles
 */


#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdbool.h>

/**
 * The used prototype
 */
void hiczak_prompt_displaying(void);
void hiczak_print(const char *message)
void error_handler(const char* error_message);
void command_user_enter(char *command, size_t s)
void command_running(const char *command);

#endif
