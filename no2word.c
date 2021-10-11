#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char number[25];

char str[100]="";
void onelength()
{
         switch(number[0])
         {
                         case '0':printf("Zero ");exit(1);
                         case '1':printf("One ");exit(1);
                         case '2':printf("Two ");exit(1);
                         case '3':printf("Three ");exit(1);
                         case '4':printf("Four ");exit(1);
                         case '5':printf("Five ");exit(1);
                         case '6':printf("Six ");exit(1);
                         case '7':printf("Seven ");exit(1);
                         case '8':printf("Eight ");exit(1);
                         case '9':printf("Nine ");exit(1);
                         default:printf("Invalid Input!!");exit(1);
         }
}

void twolength()
{
       // printf("2len");
        if(number[0]=='1')
        {
         //        printf("2len if");
                 switch(number[1])
                 {
                          case '0':printf("TEN ");break;
                          case '1':printf("ELEVEN ");break;
                          case '2':printf("TWELVE ");break;
                          case '3':printf("THIRTEEN ");break;
                          case '4':printf("FOURTEEN ");break;
                          case '5':printf("FIFTEEN ");break;
                          case '6':printf("SIXTEEN");break;
                          case '7':printf("SEVENTEEN");break;
                          case '8':printf("EIGHTEEN");break;
                          case '9':printf("NINETEEN");break;
                          
                 }
        }  
        if(number[0]=='2')
        {
         
                 switch(number[1])
                 {
                          case '0':printf("TWENTY ");break;
                          case '1':printf("TWENTY ONE ");break;
                          case '2':printf("TWENTY TWO");break;
                          case '3':printf("TWENTY THREE");break;
                          case '4':printf("TWENTY FOUR");break;
                          case '5':printf("TWENTY FIVE");break;
                          case '6':printf("TWENTY SIX");break;
                          case '7':printf("TWENTY SEVEN");break;
                          case '8':printf("TWENTY EIGHT");break;
                          case '9':printf("TWENTY NINE");break;
                          
                 }
        }  
         if(number[0]=='3')
        {
         
                 switch(number[1])
                 {
                          case '0':printf("THIRTY ");break;
                          case '1':printf("THIRTY ONE ");break;
                          case '2':printf("THIRTY TWO");break;
                          case '3':printf("THIRTY THREE");break;
                          case '4':printf("THIRTY FOUR");break;
                          case '5':printf("THIRTY FIVE");break;
                          case '6':printf("THIRTY SIX");break;
                          case '7':printf("THIRTY SEVEN");break;
                          case '8':printf("THIRTY EIGHT");break;
                          case '9':printf("THIRTY NINE");break;
                          
                 }
        }  
        if(number[0]=='4')
        {
         
                 switch(number[1])
                 {
                          case '0':printf("FORTY ");break;
                          case '1':printf("FORTY ONE ");break;
                          case '2':printf("FORTY TWO");break;
                          case '3':printf("FORTY THREE");break;
                          case '4':printf("FORTY FOUR");break;
                          case '5':printf("FORTY FIVE");break;
                          case '6':printf("FORTY SIX");break;
                          case '7':printf("FORTY SEVEN");break;
                          case '8':printf("FORTY EIGHT");break;
                          case '9':printf("FORTY NINE");break;
                          
                 }
        }  
        if(number[0]=='5')
        {
         
                 switch(number[1])
                 {
                          case '0':printf("FIFTY ");break;
                          case '1':printf("FIFTY  ONE ");break;
                          case '2':printf("FIFTY  TWO");break;
                          case '3':printf("FIFTY  THREE");break;
                          case '4':printf("FIFTY  FOUR");break;
                          case '5':printf("FIFTY  FIVE");break;
                          case '6':printf("FIFTY  SIX");break;
                          case '7':printf("FIFTY  SEVEN");break;
                          case '8':printf("FIFTY  EIGHT");break;
                          case '9':printf("FIFTY  NINE");break;
                          
                 }
        }  
        if(number[0]=='6')
        {
         
                 switch(number[1])
                 {
                          case '0':printf("SIXTY ");break;
                          case '1':printf("SIXTY ONE ");break;
                          case '2':printf("SIXTY TWO");break;
                          case '3':printf("SIXTY THREE");break;
                          case '4':printf("SIXTY FOUR");break;
                          case '5':printf("SIXTY FIVE");break;
                          case '6':printf("SIXTY  SIX");break;
                          case '7':printf("SIXTY  SEVEN");break;
                          case '8':printf("SIXTY EIGHT");break;
                          case '9':printf("SIXTY  NINE");break;
                          
                 }
        }  
        if(number[0]=='7')
        {
         
                 switch(number[1])
                 {
                          case '0':printf("SEVENTY ");break;
                          case '1':printf("SEVENTY ONE ");break;
                          case '2':printf("SEVENTY TWO");break;
                          case '3':printf("SEVENTY THREE");break;
                          case '4':printf("SEVENTY FOUR");break;
                          case '5':printf("SEVENTY FIVE");break;
                          case '6':printf("SEVENTY SIX");break;
                          case '7':printf("SEVENTY SEVEN");break;
                          case '8':printf("SEVENTY EIGHT");break;
                          case '9':printf("SEVENTY NINE");break;
                          
                 }
        }  
        if(number[0]=='8')
        {
         
                 switch(number[1])
                 {
                          case '0':printf("EIGHTY");break;
                          case '1':printf("EIGHTY ONE ");break;
                          case '2':printf("EIGHTY TWO");break;
                          case '3':printf("EIGHTY THREE");break;
                          case '4':printf("EIGHTY FOUR");break;
                          case '5':printf("EIGHTY FIVE");break;
                          case '6':printf("EIGHTY SIX");break;
                          case '7':printf("EIGHTY SEVEN");break;
                          case '8':printf("EIGHTY EIGHT");break;
                          case '9':printf("EIGHTY NINE");break;
                          
                 }
        }  
        if(number[0]=='9')
        {
         
                 switch(number[1])
                 {
                          case '0':printf("NINTY ");break;
                          case '1':printf("NINTY ONE ");break;
                          case '2':printf("NINTY TWO");break;
                          case '3':printf("NINTY THREE");break;
                          case '4':printf("NINTY FOUR");break;
                          case '5':printf("NINTY FIVE");break;
                          case '6':printf("NINTY SIX");break;
                          case '7':printf("NINTY SEVEN");break;
                          case '8':printf("NINTY EIGHT");break;
                          case '9':printf("NINTY NINE");break;
                          
                 }
        }  
}

void threelength()
{
        switch(number[0])
        {
                 case '1':strcat(str,"One Hundred ");break;
                 case '2':strcat(str,"Two Hundred ");break;
                 case '3':strcat(str,"Three Hundred ");break;
                 case '4':strcat(str,"Four Hundred ");break;
                 case '5':strcat(str,"Five Hundred ");break;
                 case '6':strcat(str,"Six Hundred ");break;
                 case '7':strcat(str,"Seven Hundred ");break;
                 case '8':strcat(str,"Eight Hundred ");break;
                 case '9':strcat(str,"Nine Hundred ");break;
        }
        
       if(number[1]=='1')
        {
                switch(number[2])
                {
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
        
        else if(number[1]=='2')
        {
                switch(number[2])
                {
                 case '1':strcat(str,"Twenty One ");break;
                 case '2':strcat(str,"Twenty Two ");break;
                 case '3':strcat(str,"Twenty Three ");break;
                 case '4':strcat(str,"Twenty Four ");break; 
                 case '5':strcat(str,"Twenty Five ");break;
                 case '6':strcat(str,"Twenty Six  ");break;
                 case '7':strcat(str,"Twenty Seven ");break;
                 case '8':strcat(str,"Twenty Eight ");break;
                 case '9':strcat(str,"Twenty Nine ");break;
                } 
        }
        
        else if(number[1]=='3')
        {
                switch(number[2])
                {
                 case '1':strcat(str,"Thirty One ");break;
                 case '2':strcat(str,"Thirty Two ");break;
                 case '3':strcat(str,"Thirty Three ");break;
                 case '4':strcat(str,"Thirty Four ");break; 
                 case '5':strcat(str,"Thirty Five ");break;
                 case '6':strcat(str,"Thirty Six  ");break;
                 case '7':strcat(str,"Thirty Seven ");break;
                 case '8':strcat(str,"Thirty Eight ");break;
                 case '9':strcat(str,"Thirty Nine ");break;
                } 
        }
        
        else if(number[1]=='4')
        {
                switch(number[2])
                {
                 case '1':strcat(str,"Forty One ");break;
                 case '2':strcat(str,"Forty Two ");break;
                 case '3':strcat(str,"Forty Three ");break;
                 case '4':strcat(str,"Forty Four ");break; 
                 case '5':strcat(str,"Forty Five ");break;
                 case '6':strcat(str,"Forty Six  ");break;
                 case '7':strcat(str,"Forty Seven ");break;
                 case '8':strcat(str,"Forty Eight ");break;
                 case '9':strcat(str,"Forty Nine ");break;
                } 
        }
        
        else if(number[1]=='5')
        {
                switch(number[2])
                {
                 case '1':strcat(str,"Fifty One ");break;
                 case '2':strcat(str,"Fifty Two ");break;
                 case '3':strcat(str,"Fifty Three ");break;
                 case '4':strcat(str,"Fifty Four ");break; 
                 case '5':strcat(str,"Fifty Five ");break;
                 case '6':strcat(str,"Fifty Six  ");break;
                 case '7':strcat(str,"Fifty Seven ");break;
                 case '8':strcat(str,"Fifty Eight ");break;
                 case '9':strcat(str,"Fifty Nine ");break;
                } 
        }
        
        else if(number[1]=='6')
        {
                switch(number[2])
                {
                 case '1':strcat(str,"Sixty One ");break;
                 case '2':strcat(str,"Sixty Two ");break;
                 case '3':strcat(str,"Sixty Three ");break;
                 case '4':strcat(str,"Sixty Four ");break; 
                 case '5':strcat(str,"Sixty Five ");break;
                 case '6':strcat(str,"Sixty Six  ");break;
                 case '7':strcat(str,"Sixty Seven ");break;
                 case '8':strcat(str,"Sixty Eight ");break;
                 case '9':strcat(str,"Sixty Nine ");break;
                } 
        }
        
        else if(number[1]=='7')
        {
                switch(number[2])
                {
                 case '1':strcat(str,"Seventy One ");break;
                 case '2':strcat(str,"Seventy Two ");break;
                 case '3':strcat(str,"Seventy Three ");break;
                 case '4':strcat(str,"Seventy Four ");break; 
                 case '5':strcat(str,"Seventy Five ");break;
                 case '6':strcat(str,"Seventy Six  ");break;
                 case '7':strcat(str,"Seventy Seven ");break;
                 case '8':strcat(str,"Seventy Eight ");break;
                 case '9':strcat(str,"Seventy Nine ");break;
                } 
        }
        
        else if(number[1]=='8')
        {
                switch(number[2])
                {
                 case '1':strcat(str,"Eighty One ");break;
                 case '2':strcat(str,"Eighty Two ");break;
                 case '3':strcat(str,"Eighty Three ");break;
                 case '4':strcat(str,"Eighty Four ");break; 
                 case '5':strcat(str,"Eighty Five ");break;
                 case '6':strcat(str,"Eighty Six  ");break;
                 case '7':strcat(str,"Eighty Seven ");break;
                 case '8':strcat(str,"Eighty Eight ");break;
                 case '9':strcat(str,"Eighty Nine ");break;
                } 
        }
        
        else if(number[1]=='9')
        {
                switch(number[2])
                {
                 case '1':strcat(str,"Ninty One ");break;
                 case '2':strcat(str,"Ninty Two ");break;
                 case '3':strcat(str,"Ninty Three ");break;
                 case '4':strcat(str,"Ninty Four ");break; 
                 case '5':strcat(str,"Ninty Five ");break;
                 case '6':strcat(str,"Ninty Six  ");break;
                 case '7':strcat(str,"Ninty Seven ");break;
                 case '8':strcat(str,"Ninty Eight ");break;
                 case '9':strcat(str,"Ninty Nine ");break;
                } 
        }
        
         else if(number[1]=='0')
        {
              switch(number[2])
              {  
                 case '1':strcat(str,"One ");break;
                 case '2':strcat(str,"Two ");break;
                 case '3':strcat(str,"Three ");break;
                 case '4':strcat(str,"Four ");break;
                 case '5':strcat(str,"Five ");break;
                 case '6':strcat(str,"Six  ");break;
                 case '7':strcat(str,"Seven ");break;
                 case '8':strcat(str,"Eight ");break;
                 case '9':strcat(str,"Nine ");break;
              }   
        }
                
        
        printf("%s\n",str);
}

int main()
{
        printf("Enter a number :");
        scanf("%s",number);
        int len=strlen(number);
        
        for(int i=0;i<len;i++)
        {
                 if(!(number[i]>=48 && number[i]<=57))
                 {
                          printf("Invalid Number %s \n",number);
                          exit(1);
                 }
        }
        switch(len)
        {
                   case 1:onelength();
                   case 2:twolength();break;
                   case 3:threelength();break;
        }
        printf("\n");
}
