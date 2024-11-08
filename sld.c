#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct 
{ 
   char dname[10],fname[10][10];
   int fcnt;
}dir;
void main()
{
     int i,ch;
     char f[30];
     dir.fcnt=0;
     printf("\nEnter name of directory __");
     scanf("%s",dir.dname);
     while(1)
     {
         printf("\n\n1.create file\t2delete\t3.search file\n4.Display files\t5.exit\nenter your choice--");
         scanf("%d",&ch);
         switch(ch)
         {
              case 1:printf("\nEnter the name of the file --");
                     scanf("%s",dir.fname[dir.fcnt]);
                     dir.fcnt++;
                     break;
              case 2:printf("\nEnter the name of the file --");       
                     scanf("%s",f);
                     for(i=0;i<dir.fcnt;i++)
                     {
                        if(strcmp(f,dir.fname[i])==0)
                        {
                           printf("file %s is deleted",f);
                           strcpy(dir.fname[i],dir.fname[dir.fcnt-1]);
                           break;
                         }
                     }      
                        if(i==dir.fcnt)
                              printf("file %s not found",f);
                        else
                             dir.fcnt--;
                        break;
              case 3:printf("\nEnter the name of the file --");       
                     scanf("%s",f);
                     for(i=0;i<dir.fcnt;i++)
                     {
                        if(strcmp(f,dir.fname[i])==0)
                        {
                           printf("file %s is found",f);
                           strcpy(dir.fname[i],dir.fname[dir.fcnt-1]);
                           break;
                        }
                     }      
                        if(i==dir.fcnt)
                              printf("file %s not found",f);
                        break;                      
              case 4:if(dir.fcnt==0)
              printf("\nDirectory Empty");
              else
              {
                  printf("\nThe files are--");
                  for(i=0;i<dir.fcnt;i++)
                      printf("\t%s",dir.fname[i]);
              }
              break;
              default:exit(0);
          }
 }
 }                     
                       
