#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
	pid_t pid,ppid;
	int i,j,k;
	for(i=0;i<20;i++)
	{
		pid=getpid();
		printf("process id are %d\n",pid);
		
		ppid=getppid();
		printf("parent process id are %d\n",ppid);
	}
}
