/*** This program is about environment variable. ***/
/*** Author: Sumit Kumar ***/
/*** Copyright (c) <02.09.2016> ***/

#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[],char *env[])
{
	int i=0;
	for(i=0;i<argc;i++)
	{
		printf("argument no. %d is %s\n",i,argv[i]);
	}
	
	i=0;
	printf("Environment variables\n");
	while(env[i])
	{
		
		printf("env[%d]=%s\n",i,env[i]);
		i++;
	}	
		printf("after passing argument value\n");
		while(argv[i])
		{
		printf("argv[%d\n]=%s\n",i,argv[i]);
		i++;
		}
}
