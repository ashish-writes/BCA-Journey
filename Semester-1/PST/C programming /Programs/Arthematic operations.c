#include <stdio.h>

int main() 
{
 int num1,num2,sum,sub,mul,div,mod,choice;
 printf("Enter the first Number:");
 scanf("%d",&num1);
 printf("Enter the Second Number:");
 scanf("%d",&num2);
 printf("Enter the choice:");
 scanf("%d",&choice);

 switch(choice)  
 {  
  case 1: sum = num1+num2;  
         printf("The sum is %d",sum);  
         break;  
  case 2: sub = num1-num2;  
         printf("The sub is %d",sub);  
         break;          
  case 3: mul = num1*num2;  
         printf("The mul is %d",mul);  
         break;   
  case 4: div = num1/num2;  
         printf("The div is %d",div);  
         break;             
  case 5: mod = num1%num2;  
         printf("The mod is %d",mod);  
         break;  
  default:printf("UNKNOW CHOICE");  
 }          
 return 0;
}
