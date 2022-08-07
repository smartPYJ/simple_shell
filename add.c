#include <stdio.h>
#include <unistd.h>

int main(void)
{
	int a = 3;
	int b = 5;
	int sum = a + b;
	pid_t ppid;

	ppid = getppid();

	printf("The sum id %d\n", sum);
	printf("ppid is %d\n", ppid);
	return 0;
}
