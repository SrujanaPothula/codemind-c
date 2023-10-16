#include<stdio.h>
int main()
{
    int year,last_two_digits;
    scanf("%d",&year);
    last_two_digits=year%100;
    printf("%02d",last_two_digits);
}