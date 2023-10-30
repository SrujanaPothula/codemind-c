#include<stdio.h>
int main()
{
    int n;
    float c,total_amount;
    scanf("%d",&n);
    if(n<=199)
    {
        c=n*1.20;
        total_amount=c+100;
    }
    else if(n>=200&&n<=400)
    {
        c=n*1.50;
        total_amount=c+100;
    }
    else if(n>=400&&n<=600)
    {
        c=n*1.80;
        total_amount=c+(c*0.15);
    }
    else
    {
        c=n*2.00;
        total_amount=c+(c*0.15);
    }
    {
        printf("%.2f",total_amount);
    }
}