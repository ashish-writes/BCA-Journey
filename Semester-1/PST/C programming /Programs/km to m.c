#include <stdio.h>

int main() {
    float km, m = 0;
    printf("Enter the distance in kilometer:");
    scanf("%f",&km);
    m = km*1000;
    printf("The distance in meter:%f",m);

    return 0;
}
