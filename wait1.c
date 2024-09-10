#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
int main()
{
	if (fork()==0)
	{
		printf("HC: hello from child\n");
		printf("It is child,running\n");
	}
	else
	{
		printf("HP: hello from parent\n");
		printf("it is parent running..\n");
		wait(NULL);
		printf("Back to parent\n");
		printf("CT:child has terminated\n");
	}
	printf("Bye!\n");
	return 0;
}
