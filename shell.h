#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

#define UNUSED(x) (void)(x)

/**
 * struct input - variables
 * @tokens: command line arguments
 * @buffer: buffer of command
 * @env: environment variables
 * @count: count of commands entered
 * @argv: arguments at opening of shell
 * @status: exit status
 * @commands: commands to execute
 */
typedef struct input
{
	char **tokens;
	char *buffer;
	char **env;
	size_t count;
	char **argv;
	int status;
	char **commands;
} input_t;


void read_cmd(void);
void tokenizer(char *buf, char *buf_cpy);
void exec_cmd(char **argv);


endif
