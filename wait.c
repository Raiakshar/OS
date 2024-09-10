#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<sys/wait.h>
int main()
{
	pid_t q;
	printf("Hello! It is before fork\n\n");
	printf("PID=%d\n",getpid());
	q=fork();
	if(q<0)
	{
		printf("Error");
	}
	else
	if(q==0)
	{
		printf("I am child,having pid %d\n",getpid());
	}
	else
	{
		wait(NULL);
		printf("Iam parent\n");
		printf("My child's pid is %d\n",q);
	}
	printf("Good Bye!\n");
	return 0;
}
