#include<stdio.h>
int main()
{
    int i,n,factorial=1;
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        factorial=factorial*i;
    }
    printf("%d",factorial);
}