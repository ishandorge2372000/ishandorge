#include<stdio.h>
int main()
{
        int n,fact,no,sum=0;
        printf("Enter n :");
        scanf("%d",&n);
        
        printf("Perfect numbers between 1 to %d are :\n1  ",n);
        for(no=1;no<=n;no++)
        {
                for(fact=1; fact<=(no/2); fact++)
                {
                        if(no % fact==0)
                        {
                                 sum +=fact;
                        } 
                }
                
                if(no == sum)
                {
                         printf("%d  ",no);
                }         
                sum=0;    
        }
        printf("\n");
}
/*
nilesh@ishan:~/Desktop/5oct21$ cc perfect_1to_n.c
nilesh@ishan:~/Desktop/5oct21$ ./a.out
Enter n :500
Perfect numbers between 1 to 500 are :
1  6  28  496  
nilesh@ishan:~/Desktop/5oct21$ ./a.out
Enter n :1000
Perfect numbers between 1 to 1000 are :
1  6  28  496  
nilesh@ishan:~/Desktop/5oct21$ ./a.out
Enter n :2000
Perfect numbers between 1 to 2000 are :
1  6  28  496  
nilesh@ishan:~/Desktop/5oct21$ ./a.out
Enter n :788
Perfect numbers between 1 to 788 are :
1  6  28  496  
nilesh@ishan:~/Desktop/5oct21$ ./a.out
Enter n :50000
Perfect numbers between 1 to 50000 are :
1  6  28  496  8128  

*/
