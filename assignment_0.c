#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
	int pid1, pid2, pid3;

	printf("Original process: PID = %d\n", getpid());

	pid1 = fork();
	printf("After 1st fork: PID = %d, Parent PID = %d, fork() returned = %d\n", getpid(), getppid(), pid1);

	pid2 = fork();
	printf("After 2nd fork: PID = %d, Parent PID = %d, fork() returned = %d\n", getpid(), getppid(), pid2);

	pid3 = fork();
	printf("After 3rd fork: PID = %d, Parent PID = %d, fork() returned = %d\n", getpid(), getppid(), pid3);
	
	while(1);

	return 0;
}

