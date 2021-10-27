#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct words
{
       char word[50];
       int count;
}e[100];
int j=0; //use for struct word records ,j denotes number of current records 
void init()
{
       int i=0;
       for(i=0;i<100;i++)
       {
              e[i].count=0;
       }
}

void store(char *tok)
{
       int i,res;
       int flag=0;
       for(i=0;i<100;i++)
       {
               res=strncmp(tok,e[i].word,strlen(tok));
               if(!res)
               {
                      // printf("+++++++++++++++\n");
                       e[i].count++;
                       flag=1;
               }
       }        
              
       if(flag==0)
       {
                strcpy(e[j].word,tok);
                e[j].count++;
                j++;
                printf("word is stored \n");
       }
}

void read(FILE *fp)
{ 
       char str[80];
       while(!feof(fp))
       {
                fgets(str,80,fp);
                printf("%s\n",str); 
               // char delimit[]=" \t\r\n\v\f";
                char *tok=strtok(str,".\n ");
                while(tok!=NULL)
                {
                         printf("%s\n",tok);
                         tok=strtok(NULL,".\n ");
                         store(tok); 
                }
       }
}

void display()
{
    int i;
    for(i=0;i<j;i++)
    {
        printf("%s\t%d\n",e[i].word,e[i].count);
    }          
}
int main()
{
       char fname[30];
       init();
       printf("Enter a file name:");
       scanf("%[^\n]s",fname);
       FILE *fp=fopen(fname,"r");
       if(fp==NULL)
       {
                printf("file does not exist! please enter the existing file\n");
                exit(1);
       }
       else
       {
                read(fp);  
                display();
       }
}
