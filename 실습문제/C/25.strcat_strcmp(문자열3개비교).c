 //2개의 문자열을 입력받아  큰문자열에 작은 문자열을 더하여 출력
//  입력예)    fffff,kkkk  => kkkkfffff  strcat  concate
# include <stdio.h>
# include <string.h>
# define pr printf
void main()
{   char str1[10];
   char str2[10];
   char str3[10];
   char hap[20]={"",};
   pr("문자열 3개 을 입력");
   scanf("%s %s %s",&str1,&str2,&str3);   
   if(strcmp(str1,str2)>0)//str1>str2 
   {   if(strcmp(str1,str3)>0)//str1 가장크며 
      {   strcat(hap,str1);          
         if(strcmp(str2,str3)>0)
         {   strcat(hap,str2);
            strcat(hap,str3);          
         }
         else
         {   strcat(hap,str3);
            strcat(hap,str2);             
         }
      }
      else //str3> str1
      {    strcat(hap,str3);          
            if(strcmp(str1,str2)>0)
            {   strcat(hap,str1);
               strcat(hap,str2);          
            }
            else
            {   strcat(hap,str2);
               strcat(hap,str1);             
            }         
      }      
   }
   
   else // str1>str2  아니다 ..  
   {
      if(strcmp(str2,str3)>0)//str2 가장크며 
      {
         strcat(hap,str2);          
         if(strcmp(str1,str3)>0)
         {   strcat(hap,str1);
            strcat(hap,str3);          
         }
         else
         {   strcat(hap,str3);
            strcat(hap,str1);             
         }
      }
      else //str3> str2     
         { 
            strcat(hap,str3);          
            if(strcmp(str1,str2)>0)
            {   strcat(hap,str1);
               strcat(hap,str2);          
            }
            else
            {   strcat(hap,str2);
               strcat(hap,str1);             
            }
         
         }
   
   }
   pr("첫번쨰  문자열 = %s\n",str1);   
   pr("두번째  문자열 = %s\n",str2);   
   pr("두번째  문자열 = %s\n",str3);   
   pr("내림합  문자열 = %s\n",hap);   
   
}
