#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>
int main() {
	pid_t pid1, pid2;

	pid1 = fork();

	if (pid1 == 0) {
		int ret1;
		ret1 = execl("/usr/bin/ls", "ls", NULL);
	}
	else{
		wait(NULL);
		pid2 = fork();
		if(pid2 == 0) {
			int ret2;
			ret2 = execl("/usr/bin/date", "date", NULL);
		}
		else{
			wait(NULL);
			printf("Parent process done\n");
		}
	}
	return 0;
}

