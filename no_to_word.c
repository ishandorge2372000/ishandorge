#include<stdio.h>
#include<stdlib.h>

int main()
{
         int no,rev=0;
         printf("Enter a number :");
         scanf("%d",&no);
         int rem;
         while(no!=0)
         {
                 rem=no%10;
                 rev=rev*10+rem;
                 no/=10;
         }
         //printf("%d",rev);
         while(rev!=0)
         {
                 rem=rev%10;
                 switch(rem)
                 {
                          default:printf("Invalid Input!!");exit(1); 
                          case 0:printf("Zero  ");break;
                          case 1:printf("One  ");break;
                          case 2:printf("Two  ");break;
                          case 3:printf("Three  ");break;
                          case 4:printf("Four  ");break;
                          case 5:printf("Five  ");break;
                          case 6:printf("Six  ");break;
                          case 7:printf("Seven  ");break;
                          case 8:printf("Eight  ");break;
                          case 9:printf("Nine  ");break;
                 }
                 rev/=10;
         }
         printf("\n");
}
/*
nilesh@ishan:~/Desktop/5oct21$ ./a.out
Enter a number :123456
One  Two  Three  Four  Five  Six  
nilesh@ishan:~/Desktop/5oct21$ ./a.out
Enter a number :999
Nine  Nine  Nine  
nilesh@ishan:~/Desktop/5oct21$ ./a.out
Enter a number :1011
One  Zero  One  One  

*/
