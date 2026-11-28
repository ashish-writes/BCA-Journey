Celsius to Farenheit converter program
--------------------------------------

  #include <stdio.h>

int main()
{ 
 float  celsius,Farenheit ;
 printf("Enter temperature in celsius:");
 scanf("%f",&celsius);
 Farenheit = (celsius*9/5)+32;
 printf("Temperature in Farenheit:%f",Farenheit);
 return 0;  
}
