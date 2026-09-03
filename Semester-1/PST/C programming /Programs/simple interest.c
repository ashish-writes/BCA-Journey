
#include <stdio.h>

int main() {
    float p , t, r, si = 0;
    printf("Enter the principal amount:");
    scanf("%f",&p);
    printf("Enter the time:");
    scanf("%f",&t);
    printf("Enter the rate:");
    scanf("%f",&r);
    si = (p*t*r)/100;
    printf("The simple interest is :%f",si);

    return 0;
}


