#include<stdio.h>
int main()
{
    int X,Y,expenditure;
    scanf("%d %d",&X,&Y);
    expenditure=Y*30;
    if(X>=expenditure)
    {
    printf("YES");
    }
    else
    {
    printf("NO");
    }
    return 0;
}