#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>

int main() {
	int pid;
	pid = fork();
	if(pid == 0){
		int child;
		child = execl("/usr/bin/grep", "grep", "Fring", "/home/yurid/assignments/fork_exec/test.txt", NULL);
	}else{
		wait(NULL);
		printf("Parent process completed\n");
	}
	return 0;
}

