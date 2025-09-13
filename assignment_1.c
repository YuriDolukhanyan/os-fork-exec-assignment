#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>

int main() {
	int temp_pid;
	temp_pid = fork();
	if (temp_pid == 0) {
		int res;
		res = execl("/usr/bin/ls", "ls", NULL);
		{
			perror("execl");
		}
		printf("After execl (if failed).\n");
	} else {
		wait(NULL);
		printf("Parent process done\n");
	}
	return 0;
}

