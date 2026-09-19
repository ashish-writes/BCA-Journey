#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    printf("Enter the third number:");
    scanf("%d",&c);
    
    if( (a>b)&&(a>c) )
    {
        printf("%d is greater than %d %d",a,b,c);
    }
    else if( (b>a)&&(b>c) )
    {
        printf("%d is greater than %d %d",b,a,c);
    }
    else if( (c>a)&&(c>b) )
    {
        printf("%d is greater than %d %d",c,a,b);
    }
    else 
    {
        printf("%d %d %d are equal",a,b,c);
    }
    
    return 0;
}
