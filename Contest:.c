#include<stdio.h>
int main()
{
    int A,B,X;
    scanf("%d%d%d",&A,&B,&X);
    int v=(2*X)+B;
    if(v>=A)
    printf("Qualify");
    else
    printf("Not Qualify");
}