#include<stdio.h>
int main()
{
    float basic,HRA,DA,PF,gross;
    scanf("%f%f%f",&basic,&HRA,&DA);
    PF=0.12*basic;
    gross=basic+HRA+DA+PF;
    printf("%.2f",PF);
    printf("
%.2f",gross);
}