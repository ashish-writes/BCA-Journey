#include <stdio.h>

int main()
{
    int i,num = 1;
    long fact = 1;
    
    printf("Enter the number");
    scanf("%d",&num);
     
    for(i=num;i>=1;i--)
    {
        fact = fact*i;
    }
    printf("The factorial is %ld",fact);
    return 0;
}
