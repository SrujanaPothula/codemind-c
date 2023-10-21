#include<stdio.h>
int main()
{
    float CP,SP,L;
    scanf("%f%f",&CP,&SP);
    L=(CP-SP)/CP*100;
    printf("%.2f",L);
}