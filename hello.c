#include<stdio.h>
#include<unistd.h>
int main()
{
	printf("I am in hello.c\n");
	printf("PID pf hello.c is %d\n",getpid());
	return 0;
}
