#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>
#include <process.h>
#include <sys/wait.h>

void lrfork()
{
	pid_t fork1;
	fork1 = fork();
	if (fork1 < 0)
		printf("Fork is failed\n");
	else if (fork1 > 0)
		printf("Parent: Andrew Kharlamov\n");
	else
		printf("Child: 1993\n");
}
int main(void)
{
	lrfork();
	sleep(40);
	return 0;
}