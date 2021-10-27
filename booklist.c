#include<stdio.h>
#include<stdlib.h>
#include<stdlib.h>
#define Newnode (struct node*)malloc(sizeof(struct node))
//singly linked list
struct node
{
   char bname[50];
   char author[50];
   struct node *next;
};
struct node *head=NULL;


int lengthLL()
{
    struct node *t;
    int i=0;
    for(t=head;t!=NULL;t=t->next)
    {
        i++;
    }
    printf("\nLinked List length=%d\n",i);
    return i;
}
struct node *append()
{
    struct node *s,*t; 
    s=Newnode;
    strcpy(s->bname,"");
    strcpy(s->author,"");
    printf("\nEnter a book name :");
    scanf("%[^\n]s",s->bname);
    scanf("%[^\n]s",s->bname);
 
    printf("\nEnter a author name :");
    scanf("%[^\n]s",s->author);
    
    if(head==NULL)
    {
       //s->prev=NULL;
       s->next=NULL;
       head=s;
    }
   
    else
    {
       for(t=head;t->next!=NULL;t=t->next);
      // s->prev=t;
       t->next=s;
       s->next=NULL;
    }
    return head;
}
   
struct node *delete(int pos)
{
    int i;
    struct node *f=head,*t=head;
    if(pos==1)
    {
       f=f->next;
       head=f;
       free(t);
    }
    else
    {
       for(i=1,t=head;i<=(pos-2);i++)
       {
            t=t->next;
       }
       f=t;
       f=f->next;
       t->next=f->next;
       free(f);
    }
    return head;
}

struct node *insert(int pos)
{
    int i;
    struct node *t,*s;
    s=Newnode;
    printf("\nEnter a book name:");
    scanf("%[^\n]s",s->bname);
    
    printf("\nEnter a author name :");
    scanf("%[^\n]s",s->author);
    if(pos==1)
    {
         s->next=head;
         head=s;
    }

    else
    {
        for(i=1,t=head;i < (pos-1) ;i++)
        {
            t=t->next;
        }
        s->next=t->next;
       
        t->next=s;
    }
    return head;
}
           
void display(struct node *F)
{
    struct node *t;
    for(t=F;t!=NULL; )
    {
        printf("book name=%s     Author=%s\n",t->bname,t->author);
        t=t->next;
        //if(t!=NULL)  printf(" -> ");
    }
     printf("\n");
}
       
int main()
{
    int n,i,pos,ch;
    printf("\nhow many books ?:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        head=append();
    }
    display(head);
    lengthLL();
    do
    {
       printf("\n\n1.Insert \n2.Delete \n0.Exit ");
       printf("\nEnter your choice :");
       scanf("%d",&ch);
       switch(ch)
       {
         
          case 1: printf("\nEnter a position a Insert:");
                  scanf("%d",&pos);
                  if( pos<=(lengthLL()+1) && pos!=0 ) 
                  {
                      head=insert(pos);    
                      display(head);
                      lengthLL();
                  }
                  else
                  {
                      printf("\nInvalid position to insert!!");
                  }
                  break;
          case 2: 
                   if(lengthLL()==1)
                      head=delete(1);
                   else
                  {
                   printf("\nEnter a position to delete :");
                   scanf("%d",&pos);
                   if( pos<=(lengthLL()) && pos!=0 )
                   {
                     head=delete(pos);     
                     display(head);
                     lengthLL();
                   }
                   else
                   {
                     printf("\nInvalid position to DELETE!!");
                   }
                  }
                   break;
                  
              
          default:printf("\nInvalid choice :");
       }
     }
     while(ch!=0);
    return 1;
} 
