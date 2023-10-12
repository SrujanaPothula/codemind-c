#include<stdio.h>
int main()
{
    int X,boy1_weight,boy2_weight,boy3_weight;
    scanf("%d%d%d%",&X,&boy1_weight,&boy2_weight);
    boy3_weight=(X*3)-(boy1_weight+boy2_weight);
    printf("%d",boy3_weight);
}