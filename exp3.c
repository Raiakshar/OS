#include<stdio.h>
#include<stdlib.h>
int mutex=1,full=0,empty=5,x=0;
void Producer()
{
--mutex;
++full;
--empty;
x++;
printf("\n Producer produces""item%d",x);
++mutex;
}
void Consumer()
{
--mutex;
--full;
++empty;
printf("\n Consumer consumes""item%d",x);
x--;
++mutex;
}
int main()
{
int n,i;
printf("\n 1.press 1 for Producer""\n2.press 2 for Consumer""\n3.press for exit");
for(i=1;i>0;i++)
{
printf("\n Enter your choice:");
scanf("%d",&n);
switch(n)
{
case 1:if((mutex==1)&&(empty!=0))
{
Producer ();
}
else
{
printf("Buffer is full!");
}
break;
case 2:if((mutex==1)&&(full!=0))
{
Consumer ();
}
else
{
printf("Buffer is empty!");
}
break;
case 3:
exit(0);
break;
}
}
}


