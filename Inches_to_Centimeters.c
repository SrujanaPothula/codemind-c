#include<stdio.h>
int main()
    {
        float height_inches,height_cm;
        scanf("%f",&height_inches);
        height_cm=height_inches*2.54;
        printf("%.2f",height_cm);
    }