#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>

int main() {
	pid_t pid;

	pid = fork();

	if(pid == 0){
		int ret;
		ret = execl("/usr/bin/echo", "echo", "Hello from the child process", NULL);
	}
	else{
		wait(NULL);
		printf("Parent process done\n");
	}

	return 0;
}

