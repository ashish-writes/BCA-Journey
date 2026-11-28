Farenheit to Celsius Converter Program

#include <stdio.h>

int main()
{ 
 float  Farenheit,Celsius;
 printf("Enter temperature in Farenheit:");
 scanf("%f",&Farenheit);
 Celsius = (Farenheit-32)*5/9;
 printf("Temperature in Celsius:%f",Celsius);
 return 0;  
}
