#include <stdio.h>
#include <unistd.h>

int main(void)
{
	pid_t pid;

	printf("One before fork\n");

	fork();

	if (pid == -1)
	{
		perror("Unsuccessful\n");
		return (1);
	}

	printf("Two, after fork\n");

	return (0);
}


