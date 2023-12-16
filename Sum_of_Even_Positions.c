#include<stdio.h>
int main()
{
    int i,n,arr[n],sum;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i+=2)
    {
        sum+=arr[i];
    }
    printf("%d",sum);
}