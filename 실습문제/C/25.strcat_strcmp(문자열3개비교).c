 //2���� ���ڿ��� �Է¹޾�  ū���ڿ��� ���� ���ڿ��� ���Ͽ� ���
//  �Է¿�)    fffff,kkkk  => kkkkfffff  strcat  concate
# include <stdio.h>
# include <string.h>
# define pr printf
void main()
{   char str1[10];
   char str2[10];
   char str3[10];
   char hap[20]={"",};
   pr("���ڿ� 3�� �� �Է�");
   scanf("%s %s %s",&str1,&str2,&str3);   
   if(strcmp(str1,str2)>0)//str1>str2 
   {   if(strcmp(str1,str3)>0)//str1 ����ũ�� 
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
   
   else // str1>str2  �ƴϴ� ..  
   {
      if(strcmp(str2,str3)>0)//str2 ����ũ�� 
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
   pr("ù����  ���ڿ� = %s\n",str1);   
   pr("�ι�°  ���ڿ� = %s\n",str2);   
   pr("�ι�°  ���ڿ� = %s\n",str3);   
   pr("������  ���ڿ� = %s\n",hap);   
   
}
