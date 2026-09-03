#include <stdio.h>

int main() {
    float m, km = 0;
    printf("Enter the distance in meter:");
    scanf("%f",&m);
    km = m/1000;
    printf("The distance in kilometer:%f",km);

    return 0;
}
