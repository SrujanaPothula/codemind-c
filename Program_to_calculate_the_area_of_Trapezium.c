#include<stdio.h>
int main()
{
    float base1,base2,height,area;
    scanf("%f%f%f",&base1,&base2,&height);
    area=(base1+base2)/2.0*height;
    printf("%.4f",area);
}