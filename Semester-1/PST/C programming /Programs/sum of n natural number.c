#include <stdio.h>

int main()
{
    int i,num;
    int sum = 0;
    
    printf("Enter the number:");
    scanf("%d",&num);
     
    for(i=num;i>=1;i--)
    {
        sum = sum+i;
    }
    printf("The sum is:%d",sum);
    return 0;
}
