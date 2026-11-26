#include <stdio.h>

int main()
{ 
 float b,h,area = 1;
 printf("Enter the base of the Triangle:");
 scanf("%f",&b);
 printf("Enter the height of the Triangle:");
 scanf("%f",&h);
 area = 0.5*b*h;
 printf("The area of the Triangle :%f",area);
 return 0;  
}
