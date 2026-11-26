#include <stdio.h>

int main()
{ 
 float length,breadth,area = 1;
 printf("Enter the length of the rectangle:");
 scanf("%f",&length);
 printf("Enter the breadth of the rectangle:");
 scanf("%f",&breadth);
 area = length*breadth;
 printf("The area of the Rectangle:%f",area);
 return 0;  
}
