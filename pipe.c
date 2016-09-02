/*** This program is about process id ***/
/*** Author: Sumit Kumar ***/
/*** Copyright (c) <02.09.2016> ***/

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char top,ch[50];
	int i,j;
	pid_t pid,ppid;
	pid=getpid();
	ppid=getppid();
	/*if(pid<ppid)
	{
		printf("process ids are %d\n",pid);
	/*}
	else*
	
		printf("parent process ids are %d\n",ppid);
	*/
	/*if(fork()==0)
	{*/
		execlp("top","top",(char *)0);
		printf("process with id number are\n");
		printf("top not found\n");
		printf("enter any key for exit");
		scanf("%s",ch);
		exit(0);
		while(ch)
		{
			exit(0);
		}
}
