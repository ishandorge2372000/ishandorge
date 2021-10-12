#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char number[25];
char str[400]="";

void onelength(char);
void tys(char);
void teens(char);
int flag=1;
void onelength(char no)
{
         switch(no)
         {
                 case '0':strcat(str,"Zero ");break;
                 case '1':strcat(str,"One ");break;
                 case '2':strcat(str,"Two ");break;
                 case '3':strcat(str,"Three ");break;
                 case '4':strcat(str,"Four ");break;
                 case '5':strcat(str,"Five ");break;
                 case '6':strcat(str,"Six ");break;
                 case '7':strcat(str,"Seven ");break;
                 case '8':strcat(str,"Eight ");break;
                 case '9':strcat(str,"Nine ");break;      
         }
}

void tys(char no)
{
        switch(no)
        {
                 case '2':strcat(str,"Twenty ");break;
                 case '3':strcat(str,"Thirty ");break;
                 case '4':strcat(str,"Forty ");break;
                 case '5':strcat(str,"Fifty ");break;
                 case '6':strcat(str,"Sixty ");break;
                 case '7':strcat(str,"Seventy ");break;
                 case '8':strcat(str,"Eighty ");break;
                 case '9':strcat(str,"Ninety ");break;
        }
}

void teens(char ch)
{
        switch(ch)
        {
                 case '0':strcat(str,"Ten ");break;
                 case '1':strcat(str,"Eleven ");break;
                 case '2':strcat(str,"Twelve ");break;
                 case '3':strcat(str,"Thirteen ");break;
                 case '4':strcat(str,"Fourteen ");break;
                 case '5':strcat(str,"Fifteen ");break;
                 case '6':strcat(str,"Sixteen  ");break;
                 case '7':strcat(str,"Seventeen ");break;
                 case '8':strcat(str,"Eighteen ");break;
                 case '9':strcat(str,"Nineteen ");break;
        } 
}

void check(char h,char t,char u)
{
        if(h!='0')
        {
                onelength(h);
                strcat(str,"Hundred ");
        }
        if(t=='1')
        {
                teens(u);
        }
        else 
        {
                tys(t);
                if(u!='0') onelength(u);
        }
        
        if(h=='0' && t=='0' && u=='0') flag=0;
        else flag=1;
}
void twolength()
{
        check('0',number[0],number[1]);
}

void threelength()
{
        check(number[0],number[1],number[2]);
}

void fourlength()
{
        if(number[0]!='0')
        {
               onelength(number[0]);
               strcat(str,"Thousand ");
        }  
        check(number[1],number[2],number[3]);     
}

void fivelength()
{
        check('0',number[0],number[1]);
        if(flag)  strcat(str,"Thousand ");
        check(number[2],number[3],number[4]);
}

void sixlength()
{
        check(number[0],number[1],number[2]);
        if(flag) strcat(str,"Thousand ");
        check(number[3],number[4],number[5]);
}

void sevenlength()
{
        if(number[0]!='0')
        {
                  onelength(number[0]);
                  strcat(str,"Million ");
        }
        check(number[1],number[2],number[3]);
        if(flag) strcat(str,"Thousand ");
        check(number[4],number[5],number[6]);
}
void eightlength()
{
        check('0',number[0],number[1]);
        if(flag) strcat(str,"Million ");
        check(number[2],number[3],number[4]);
        if(flag) strcat(str,"Thousand ");
        check(number[5],number[6],number[7]);
}

void ninelength()
{
        check(number[0],number[1],number[2]);
        if(flag) strcat(str,"Million ");
        check(number[3],number[4],number[5]);
        if(flag) strcat(str,"Thousand ");
        check(number[6],number[7],number[8]);
}

void tenlength()
{
        if(number[0]!='0')
        {
                 onelength(number[0]);
                 strcat(str,"Billion ");
        }
        check(number[1],number[2],number[3]);
        if(flag) strcat(str,"Million ");
        check(number[4],number[5],number[6]);
        if(flag) strcat(str,"Thousand ");
        check(number[7],number[8],number[9]);
}

void elevenlength()
{
        check('0',number[0],number[1]);
        if(flag) strcat(str,"Billion "); 
        check(number[2],number[3],number[4]);
        if(flag) strcat(str,"Million ");
        check(number[5],number[6],number[7]);
        if(flag) strcat(str,"Thousand ");
        check(number[8],number[9],number[10]);
}
void twelvelength()
{
        check(number[0],number[1],number[2]);
        if(flag) strcat(str,"Billion "); 
        check(number[3],number[4],number[5]);
        if(flag) strcat(str,"Million ");
        check(number[6],number[7],number[8]);
        if(flag) strcat(str,"Thousand ");
        check(number[9],number[10],number[11]);
}
void thirteenlength()
{
        if(number[0]!='0')
        {
                 onelength(number[0]);
                 strcat(str,"Trillion ");
        }
        check(number[1],number[2],number[3]);
        if(flag) strcat(str,"Billion "); 
        check(number[4],number[5],number[6]);
        if(flag) strcat(str,"Million ");
        check(number[7],number[8],number[9]);
        if(flag) strcat(str,"Thousand ");
        check(number[10],number[11],number[12]);
}
void fourteenlength()
{
        check('0',number[0],number[1]);
        if(flag) strcat(str,"Trillion "); 
        check(number[2],number[3],number[4]);
        if(flag) strcat(str,"Billion ");
        check(number[5],number[6],number[7]);
        if(flag) strcat(str,"Million ");
        check(number[8],number[9],number[10]);
        if(flag) strcat(str,"Thousand ");
        check(number[11],number[12],number[13]);
}

void fifteenlength()
{
        check(number[0],number[1],number[2]);
        if(flag) strcat(str,"Trillion "); 
        check(number[3],number[4],number[5]);
        if(flag) strcat(str,"Billion ");
        check(number[6],number[7],number[8]);
        if(flag) strcat(str,"Million ");
        check(number[9],number[10],number[11]);
        if(flag) strcat(str,"Thousand ");
        check(number[12],number[13],number[14]);
}
void sixteenlength()
{
        if(number[0]!='0')
        {
                 onelength(number[0]);
                 strcat(str,"Quadrillion ");
        }
        check(number[1],number[2],number[3]);
        if(flag) strcat(str,"Trillion "); 
        check(number[4],number[5],number[6]);
        if(flag) strcat(str,"Billion ");
        check(number[7],number[8],number[9]);
        if(flag) strcat(str,"Million ");
        check(number[10],number[11],number[12]);
        if(flag) strcat(str,"Thousand ");
        check(number[13],number[14],number[15]);
}
void seventeenlength()
{
        check('0',number[0],number[1]);
        if(flag) strcat(str,"Quadrillion "); 
        check(number[2],number[3],number[4]);
        if(flag) strcat(str,"Trillion ");
        check(number[5],number[6],number[7]);
        if(flag) strcat(str,"Billion ");
        check(number[8],number[9],number[10]);
        if(flag) strcat(str,"Million ");
        check(number[11],number[12],number[13]);
        if(flag) strcat(str,"Thousand ");
        check(number[14],number[15],number[16]);
}
void eighteenlength()
{
        check(number[0],number[1],number[2]);
        if(flag) strcat(str,"Quadrillion "); 
        check(number[3],number[4],number[5]);
        if(flag) strcat(str,"Trillion ");
        check(number[6],number[7],number[8]);
        if(flag) strcat(str,"Billion ");
        check(number[9],number[10],number[11]);
        if(flag) strcat(str,"Million ");
        check(number[12],number[13],number[14]);
        if(flag) strcat(str,"Thousand ");
        check(number[15],number[16],number[17]);
}

void nineteenlength()
{
        if(number[0]!='0')
        {
                 onelength(number[0]);
                 strcat(str,"Quintillion ");
        }
        check(number[1],number[2],number[3]);
        if(flag) strcat(str,"Quadrillion "); 
        check(number[4],number[5],number[6]);
        if(flag) strcat(str,"Trillion ");
        check(number[7],number[8],number[9]);
        if(flag) strcat(str,"Billion ");
        check(number[10],number[11],number[12]);
        if(flag) strcat(str,"Million ");
        check(number[13],number[14],number[15]);
        if(flag) strcat(str,"Thousand ");
        check(number[16],number[17],number[18]);
}

void twentylength()
{
        check('0',number[0],number[1]);
        if(flag) strcat(str,"Quintillion "); 
        check(number[2],number[3],number[4]);
        if(flag) strcat(str,"Quadrillion ");
        check(number[5],number[6],number[7]);
        if(flag) strcat(str,"Trillion ");
        check(number[8],number[9],number[10]);
        if(flag) strcat(str,"Billion ");
        check(number[11],number[12],number[13]);
        if(flag) strcat(str,"Million ");
        check(number[14],number[15],number[16]);
        if(flag) strcat(str,"Thousand ");
        check(number[17],number[18],number[19]);
}

void twentyonelength()
{
        check(number[0],number[1],number[2]);
        if(flag) strcat(str,"Quintillion "); 
        check(number[3],number[4],number[5]);
        if(flag) strcat(str,"Quadrillion ");
        check(number[6],number[7],number[8]);
        if(flag) strcat(str,"Trillion ");
        check(number[9],number[10],number[11]);
        if(flag) strcat(str,"Billion ");
        check(number[12],number[13],number[14]);
        if(flag) strcat(str,"Million ");
        check(number[15],number[16],number[17]);
        if(flag) strcat(str,"Thousand ");
        check(number[18],number[19],number[20]);
}
int main()
{
     while(1)
     {
        printf("Enter a number :");
        scanf("%s",number);
        int len=strlen(number);
        
        for(int i=0;i<len;i++)
        {
                 if(!(number[i]>=48 && number[i]<=57))
                 {
                          printf("Invalid input %s \n",number);
                          len=0;
                          strcpy(str,"");
                 }
        }
        switch(len)
        {
                   case 1:onelength(number[0]);break;
                          
                   case 2:twolength();break;
                           
                   case 3:threelength();break;
                          
                   case 4:fourlength();break;
                          
                   case 5:fivelength();break;
                          
                   case 6:sixlength();break;
                             
                   case 7:sevenlength();break;
                          
                   case 8:eightlength();break;
                           
                   case 9:ninelength();break;
                           
                   case 10:tenlength();break;
                           
                   case 11:elevenlength();break;
                           
                   case 12:twelvelength();break;
                           
                   case 13:thirteenlength();break;
                           
                   case 14:fourteenlength();break;
                          
                   case 15:fifteenlength();break;
                          
                   case 16:sixteenlength();break;
                          
                   case 17:seventeenlength();break;
                          
                   case 18:eighteenlength();break;
                            
                   case 19:nineteenlength();break;
                          
                   case 20:twentylength();break; 
                          
                   case 21:twentyonelength();break; 
        }
        printf("%s\n",str);
        printf("\n");
        strcpy(str,"");
        if(!strcmp(number,"-1")) exit(0);
     }   
}
/*nilesh@ishan:~/Desktop$ cc no2word.c
nilesh@ishan:~/Desktop$ ./a.out
Enter a number :121 
One Hundred Twenty One 

Enter a number :199
One Hundred Ninety Nine 

Enter a number :989
Nine Hundred Eighty Nine 

Enter a number :564
Five Hundred Sixty Four 

Enter a number :111
One Hundred Eleven 

Enter a number :1111
One Thousand One Hundred Eleven 

Enter a number :1123
One Thousand One Hundred Twenty Three 

Enter a number :1222
One Thousand Two Hundred Twenty Two 

Enter a number :1200
One Thousand Two Hundred 

Enter a number :1220
One Thousand Two Hundred Twenty 

Enter a number :1299
One Thousand Two Hundred Ninety Nine 

Enter a number :1300
One Thousand Three Hundred

Enter a number :1011
One Thousand Eleven 

Enter a number :1012
One Thousand Twelve 

Enter a number :1019
One Thousand Nineteen 

Enter a number :1020
One Thousand Twenty 

Enter a number :1121
One Thousand One Hundred Twenty One 

Enter a number :1999
One Thousand Nine Hundred Ninety Nine 

Enter a number :2000
Two Thousand 

Enter a number :3001
Three Thousand One 

Enter a number :3011
Three Thousand Eleven 

Enter a number :9011
Nine Thousand Eleven 

Enter a number :9099
Nine Thousand Ninety Nine 

Enter a number :9009
Nine Thousand Nine  

Enter a number :10201
Ten Thousand Two Hundred One 

Enter a number :10333
Ten Thousand Three Hundred Thirty Three 

Enter a number :10011
Ten Thousand Eleven 

Enter a number :10001
Ten Thousand One 

Enter a number :10000
Ten Thousand 

Enter a number :21000
Twenty One Thousand 

Enter a number :21333
Twenty One Thousand Three Hundred Thirty Three 

Enter a number :21033
Twenty One Thousand Thirty Three 

Enter a number :21201
Twenty One Thousand Two Hundred One 

Enter a number :21001
Twenty One Thousand One 

Enter a number :01010
One Thousand Ten 

Enter a number :0001
One 

Enter a number :10010
Ten Thousand Ten 

Enter a number :99999
Ninety Nine Thousand Nine Hundred Ninety Nine 

Enter a number :99000
Ninety Nine Thousand 

Enter a number :99001
Ninety Nine Thousand One 

Enter a number :99010
Ninety Nine Thousand Ten 

Enter a number :90900
Ninety Thousand Nine Hundred 

Enter a number :90090
Ninety Thousand Ninety 

Enter a number :90009
Ninety Thousand Nine 

Enter a number :2111111
Two Million One Hundred Eleven Thousand One Hundred Eleven 

Enter a number :2111239
Two Million One Hundred Eleven Thousand Two Hundred Thirty Nine 

Enter a number :1000000
One Million 

Enter a number :9000000
Nine Million 

Enter a number :1010101
One Million Ten Thousand One Hundred One 

Enter a number :1010010
One Million Ten Thousand Ten 

Enter a number :1010100
One Million Ten Thousand One Hundred 

Enter a number :1010001
One Million Ten Thousand One 

Enter a number :1001001
One Million One Thousand One 

Enter a number :1001000
One Million One Thousand 

Enter a number :1000100
One Million One Hundred 

Enter a number :1000010
One Million Ten 

Enter a number :1000100
One Million One Hundred 

Enter a number :1000001
One Million One 

Enter a number :7111111
Seven Million One Hundred Eleven Thousand One Hundred Eleven 

Enter a number :7111129
Seven Million One Hundred Eleven Thousand One Hundred Twenty Nine 

Enter a number :9229999
Nine Million Two Hundred Twenty Nine Thousand Nine Hundred Ninety Nine 

Enter a number :9000009
Nine Million Nine 

Enter a number :9090909
Nine Million Ninety Thousand Nine Hundred Nine 

Enter a number :9090900
Nine Million Ninety Thousand Nine Hundred 

Enter a number :10111111
Ten Million One Hundred Eleven Thousand One Hundred Eleven 

Enter a number :99000001
Ninety Nine Million One 

Enter a number :90000010
Ninety Million Ten 

Enter a number :90101000
Ninety Million One Hundred One Thousand 

Enter a number :99000000
Ninety Nine Million 

Enter a number :112199000
One Hundred Twelve Million One Hundred Ninety Nine Thousand 

Enter a number :112199001
One Hundred Twelve Million One Hundred Ninety Nine Thousand One 

Enter a number :112199100
One Hundred Twelve Million One Hundred Ninety Nine Thousand One Hundred 

Enter a number :112000001
One Hundred Twelve Million One 

Enter a number :112001000
One Hundred Twelve Million One Thousand 

Enter a number :785010011
Seven Hundred Eighty Five Million Ten Thousand Eleven 

Enter a number :1112199000
One Billion One Hundred Twelve Million One Hundred Ninety Nine Thousand 

Enter a number :1112199100
One Billion One Hundred Twelve Million One Hundred Ninety Nine Thousand One Hundred 

Enter a number :1112199001
One Billion One Hundred Twelve Million One Hundred Ninety Nine Thousand One 

Enter a number :1000000000
One Billion 

Enter a number :9000001000
Nine Billion One Thousand 

Enter a number :0100000000
One Hundred Million 

Enter a number :13000000000
Thirteen Billion 

Enter a number :13100000001
Thirteen Billion One Hundred Million One 

Enter a number :999000111000
Nine Hundred Ninety Nine Billion One Hundred Eleven Thousand 

Enter a number :999000111010
Nine Hundred Ninety Nine Billion One Hundred Eleven Thousand Ten 

Enter a number :1213112111000
One Trillion Two Hundred Thirteen Billion One Hundred Twelve Million One Hundred Eleven Thousand 

Enter a number :1000000100000
One Trillion One Hundred Thousand 

Enter a number :21000100000001 
Twenty One Trillion One Hundred Million One 

Enter a number :21001001001010
Twenty One Trillion One Billion One Million One Thousand Ten 

Enter a number :101000101000101000
One Hundred One Quadrillion One Hundred One Billion One Hundred One Thousand 

Enter a number :101000000000000001
One Hundred One Quadrillion One 

Enter a number :999999999999999999999
Nine Hundred Ninety Nine Quintillion Nine Hundred Ninety Nine Quadrillion Nine Hundred Ninety Nine Trillion Nine Hundred Ninety Nine Billion Nine Hundred Ninety Nine Million Nine Hundred Ninety Nine Thousand Nine Hundred Ninety Nine 
*/
