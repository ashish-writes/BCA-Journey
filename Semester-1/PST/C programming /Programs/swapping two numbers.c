This code swap two numbers without using third variable.

#include <stdio.h>
int main()
{
    int num1,num2;
    printf("Enter the first number:");
    scanf("%d",&num1);
    printf("Enter the second number:");
    scanf("%d",&num2);
    printf("Before swapping the values were %d and %d\n",num1,num2);
    num1 = num1+num2;
    num2 = num1-num2;
    num1 = num1-num2;
    printf("After swapping the values are %d and %d",num1,num2);
    return 0;
}
