#include <stdio.h>
#include <unistd.h>

int main()
{
   // int fork_result;
	printf("Bienvenido al programa\n");
    printf("Process Type        PID       PPID        Time");
	fork();
	fork();
	fork();
   	printf("System process %d %d\n", getpid(), getppid());
    	return 0;
}
