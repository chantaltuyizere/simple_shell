#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main(void)
{
	char *command;

	while (1)
	{
		printf("#cisfun$ ");
		fflush(stdout);

		size_t bufsize = 0;
		ssize_t getline_result = getline(&command, &bufsize, stdin);
		if (getline_result == -1)
		{
			break;
		}

		pid_t pid = fork();
		if (pid == 0)
		{
			char *argv[] = {command, NULL};
			execve(argv[0], argv, NULL);
			perror("execve");
			exit(1);
		}
		else if (pid < 0)
		{
			perror("fork");
			exit(1);
		}

		wait(NULL);
	}

	free(command);

	return (0);
}

