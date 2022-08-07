#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * execve - execute program with argument
 *
 * Return: nothing.
 */

void exec_cmd(char **argv)
{
        pid_t pid;

        pid = fork();

        /* in the parent */

        if (fork() != 0)
        {
                wait(NULL);
                disp_cmd();
        }
        else
        {
                if (execve(argv[0], argv, NULL) == -1)
                        perror("Input new command");
        }

}
