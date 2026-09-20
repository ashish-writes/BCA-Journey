#include <stdio.h>

int main()
{
    int a;
    printf("Enter the first number:");
    scanf("%d",&a);
    
    if(a >= 18)
    {
        printf("can vote\n",a);
    }
    
    return 0;
} 
