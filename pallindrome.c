#include<stdio.h>
int check(char *);
int main()
{
         char str[50];
         printf("Enter a string :");
         scanf("%[^\n]s",str);
         if(check(str)) printf("%s is a pallindrome\n",str);
         else printf("%s is NOT a pallindrome\n",str);
}

int check(char *str)
{
         int i=0,j;
         for(j=0;str[j]!='\0';j++);
         j--;
         while(i<j)
         {
                 if(str[i++]!=str[j--]) return 0;
         }
         if(i>=j) return 1;
}
/*nilesh@ishan:~/Desktop/C/CampusConnectPlacement$ ./a.out
Enter a string :madam
madam is a pallindrome
nilesh@ishan:~/Desktop/C/CampusConnectPlacement$ ./a.out
Enter a string :racecar
racecar is a pallindrome
nilesh@ishan:~/Desktop/C/CampusConnectPlacement$ ./a.out
Enter a string :malayalam
malayalam is a pallindrome
nilesh@ishan:~/Desktop/C/CampusConnectPlacement$ ./a.out
Enter a string :modern
modern is NOT a pallindrome
nilesh@ishan:~/Desktop/C/CampusConnectPlacement$ ./a.out
Enter a string :ishan
ishan is NOT a pallindrome
*/
