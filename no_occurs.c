#include<stdio.h>
#include<stdlib.h>
int main()
{       
        long long int no;
        printf("Enter a number :");
        scanf("%lli",&no);
        int rem;
        static int zeros,ones,twos,threes,fours,fives,sixes,sevens,eights,nines;
        while(no!=0)
        {
                 rem=(int)no%10;
                 switch(rem)
                 {
                           case 0:zeros++;break;
                           case 1:ones++;break;
                           case 2:twos++;break;
                           case 3:threes++;break;
                           case 4:fours++;break;
                           case 5:fives++;break;
                           case 6:sixes++;break;
                           case 7:sevens++;break;
                           case 8:eights++;break;
                           case 9:nines++;break;
                           default:printf("Invalid Input!!!!");
                                   exit(1);
                 }
                 no=no/10;
         }      
         
         printf("0 occurs %d times\n",zeros);
         printf("1 occurs %d times\n",ones);
         printf("2 occurs %d times\n",twos);
         printf("3 occurs %d times\n",threes);
         printf("4 occurs %d times\n",fours);
         printf("5 occurs %d times\n",fives);
         printf("6 occurs %d times\n",sixes);
         printf("7 occurs %d times\n",sevens);
         printf("8 occurs %d times\n",eights);
         printf("9 occurs %d times\n",nines);
          
}
/*
nilesh@ishan:~/Desktop/5oct21$ ./a.out
Enter a number :9075559166
0 occurs 1 times
1 occurs 1 times
2 occurs 0 times
3 occurs 0 times
4 occurs 0 times
5 occurs 3 times
6 occurs 2 times
7 occurs 1 times
8 occurs 0 times
9 occurs 2 times
nilesh@ishan:~/Desktop/5oct21$ ./a.out
Enter a number :1255
0 occurs 0 times
1 occurs 1 times
2 occurs 1 times
3 occurs 0 times
4 occurs 0 times
5 occurs 2 times
6 occurs 0 times
7 occurs 0 times
8 occurs 0 times
9 occurs 0 times

*/
